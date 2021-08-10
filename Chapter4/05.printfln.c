//
// Created by helisi on 2021/8/11.
//
//实现printfln()
#include <stdio.h>
#include <stdarg.h>

//函数实现
void Printfln(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

//宏实现
// "Hello ""World" == "Hello World"
#define PRINTFLN(format, ...) printf(format"\n", ##__VA_ARGS__)
// #宏参数 参数变成字面量
#define PRINT_INT(value) printf(#value": %d\n", value)
// __FILE__ 在那个文件
// __LINE__ 哪行
// __FUNCTION__ 哪个函数，但预处理不能知道函数信息，在编译阶段才会生成语法树
// (../05.printfln.c:20) main:
#define PRINTFLN2(format, ...) printf("("__FILE__":%d) %s:"format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)

int main() {
  Printfln("%d", 2);
  PRINTFLN("%d", 3);
  int value = 4;
  PRINT_INT(value); //value: 4
  PRINTFLN2("%d", 5);
  return 0;
}

