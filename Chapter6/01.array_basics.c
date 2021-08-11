#include <stdio.h>
#include "include/print_util.h"

#define ARRAY_SIZE 10

//全局
int global_array[ARRAY_SIZE];

int main() {

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(global_array[i]);
  }

  //index from 0
  int array[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array[i]);
  }

  //直接初始化
  int array_2[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array_2[i]);
  }

  double array_double[5] = {1.0, 2.3};
  for (int i = 0; i < 5; ++i) {
    PRINT_DOUBLE(array_double[i]);
  }

  //不赋值时为''
  char array_char[5] = {[2] = 'o', 'a', 'b'};
  for (int i = 0; i < 5; ++i) {
    PRINT_CHAR(array_char[i]);
  }

  printf("Hello, World!\n");
  return 0;
}












