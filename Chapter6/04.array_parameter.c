//
// Created by helisi on 2021/8/13.
//
#include <stdio.h>
#include "include/print_util.h"

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[10] = {1, 4, 7, 0, 10, 33, 654, 392, 23, 43};
//  当数组作为参数传递时，传入的是数组的头地址，没有数组长度信息
  PRINT_INT(SumIntArray(array, 5));
  return 0;
}
