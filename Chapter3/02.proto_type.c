//
// Created by helisi on 2021/8/9.
//
#include <stdio.h>

void EmptyParamList(void);
int Add(int, int);
/*
 * 1.函数名
 * 2.函数返回值类型，如果没写，默认为int
 * 3.函数参数列表，参数类型，和参数顺序，参数和形参名不重要
 * 4.当形参不写时代表随意传入参数
 * */

int main() {
  EmptyParamList();
  int result = Add(1, 2);
  printf("result of add: %d\n", result);
  return 0;
}

void EmptyParamList(void) {
  puts("Hello");
}

int Add(int a, int b) {
  return a + b;
}
