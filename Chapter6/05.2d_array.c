//
// Created by helisi on 2021/8/13.
//
#include <stdio.h>
#include "include/print_util.h"

void SumIntArrays(int rows, int columns, int array[][columns], int result[]) {
//  int result[];当需要返回一个array时，这是一个auto变量，函数返回时会被销毁，所以需要传入
//  二维数组是数组的数组，传入参数时必须传入列数
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main() {
//  数组的数组
  int vehicle_limits[5][2];
//  int[2]
//  vehicle_limits[0];
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      vehicle_limits[i][j] = i + j;
    }
  }

  int vehicle_limits_2[5][2] = {
//      {0, 5},
//      {1, 6},
//      {2, 7},
//      {3, 8},
//      {4, 9}
//    等价写法
//    0, 5, 1, 6, 2, 7, 3, 8, 4, 9
//    使用索引直接赋值
    0, 5, 1, [1][1] = 6, 2, 7, 3, 8, 4, 9
  };

  int scores[5][4] = {
      {135, 135, 138, 277},
      {105, 134, 108, 265},
      {113, 107, 145, 232},
      {123, 99, 140, 227},
      {98, 118, 127, 242}
  };
//  必须初始化
  int result[5] = {0};
  SumIntArrays(5, 4, scores, result);
  for (int i = 0; i < 5; ++i) {
    printf("%d,", result[i]);
  }

  return 0;
}