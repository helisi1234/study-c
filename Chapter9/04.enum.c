//
// Created by helisi on 2021/9/10.
//
// 枚举，定义有限集合的方法
#include <stdio.h>

typedef enum FileFormat {
  PNG, JPEG, BMP, UNKNOWN
} FileFormat;

FileFormat GuessFormat(char *file_path) {
  FILE *file = fopen(file_path, "rb");
  FileFormat file_format = UNKNOWN;
  if(file) {
    char buffer[8] = {0};
//    只读8个字节
    size_t bytes_count = fread(buffer, 1, 8, file);
    if(bytes_count == 8) {
//      bmp: 42 4D
//      png: 89 50 4E 47 0D 0A 1A 0A
//      jpeg:FF D8 FF E0
//      C语言是小端序需要倒过来写
      if(*((short *)buffer) == 0x4D42) {
        file_format = BMP;
      } else if(*((long long *)buffer) == 0x0A1A0A0D474E5089) {
        file_format = PNG;
      } else if(*((int *)buffer) == 0xE0FFD8FF) {
        file_format = JPEG;
      }
    }
    fclose(file);
  }
  return file_format;
}

int main() {
  /*
   *  枚举内部类似数组，当不设置值时
   *  第一个元素等价于0
   *  对file_format赋值成PNG或0都是一样的
   *  依次，JPEG~1，BMP~2，UNKNOWN~3
   *  如果对JEPG=20，那么BMP~21，UNKNOWN~22
   * */
  FileFormat file_format = PNG;
  FileFormat file_format1 = 0;
  printf("%d\n", GuessFormat("images/c.png"));
  printf("%d\n", GuessFormat("images/c.bmp"));
  printf("%d\n", GuessFormat("images/c.jpeg"));
  printf("%d\n", GuessFormat("images/c.webp"));
  return 0;
}

