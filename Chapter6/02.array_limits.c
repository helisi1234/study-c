//
// Created by helisi on 2021/8/12.
//
#include <stdio.h>
#include "include/print_util.h"

#define ARRAY_SIZE 5

int main() {

  int array[ARRAY_SIZE];
  PRINT_INT(array[0]);
  //C语言中编译时不会检查数组越界
  PRINT_INT(array[5]);

  //array[5] => array + 5

  int value = 2;
//  C语言中的const修饰变量也是变量不是真正的常量，c++中的const是真的常量
  const int value2 = 2;
//  使用变量创建数组c99支持，gcc支持
//  int array_size_of_value[value];
//  int array_size_of_value[value2];
  return 0;
}
