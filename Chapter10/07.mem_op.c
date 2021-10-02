//
// Created by helisi on 2021/9/29.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 常见内存操作函数
int main() {
//  一下三组mem和str功能对应，只多了size这个参数
//  memcpy();
//  strcpy();

//  memchr();
//  strchr();

//  memcmp();
//  strcmp();

// 把整块内存设置为一个整数
  char *mem = malloc(10);
  memset(mem, 0, 10);
  for (int i = 0; i < 10; ++i) {
    printf("%d ", mem[i]);
  }
  free(mem);

//  将src指向的内存复制到dst这块，可以用在内存覆盖的情境下
//  strcpy就只能往空内存块中复制，不能处理内存覆盖
//  memmove(void *_Dst, const void *_Src, size_t _Size)
  char src[] = "HelloWorld";
  char *dest = malloc(11);
  memset(dest, 0, 11);
  memcpy(dest, src, 11);
  puts(dest);
  memmove(dest + 3, dest + 1, 4);
  puts(dest);
  free(dest);

  return 0;
}

