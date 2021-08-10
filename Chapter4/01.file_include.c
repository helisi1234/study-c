//#include <stdio.h>
/*
 * c语言执行流程
 * 源代码 -> (预处理器) -> 宏替换后的源代码 -> (编译器) -> 汇编程序 -> (汇编器) -> 可重定位目标程序 -> 链接器 -> 可执行程序
 * hello.c    (cpp)         hello.i         (ccl)     hello.s    (as)       hello.o此时会从    (ld)
 *                                                                          标准库中调用使用的函数，例printf.o put.o
 * 宏文件的作用就是提供函数声明
 * 如果从宏文件中将调用的函数的函数声明提出来，依然可以执行，最后用的都是标准库
 * */

int __cdecl puts(char const*);
int __cdecl printf(const char * __restrict__ _Format, ...);

int main() {
  puts("Hello World!!!\n");
  printf("Hello, World!\n");
  return 0;
}