//
// Created by helisi on 2021/8/7.
//
#include <stdio.h>

int main() {
  //申请内存就是定义变量
  int value;
  int value_init = 3;
  value = 4;
  value_init = 5;
  printf("value:%d\n", value);
  value_init = value;
  printf("size of value:%d\n", sizeof(value));
  printf("address of value:%#x\n", &value);
  return 0;
}
