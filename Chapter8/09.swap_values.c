//
// Created by helisi on 2021/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

//void * 无类型指针
void swap(void *first, void *second, size_t size) {
  void *temp = malloc(size);
  if(temp) {
    memcpy(temp, first, size);
    memcpy(first, second, size);
    memcpy(second, temp, size);
    free(temp);
  } else {
    // 错误处理
  }
}

#define SWAP(a, b, type) {type temp = a; a = b; b = temp;}
//gcc中对c语言支持typeof(a) => type
#define SWAP_GCC(a, b) {typeof(a) temp = a; a = b; b = temp;}
//为了再if判断中使用
/*
 *  if(a) SWAP(a, b); else 会报错已经宏替换成 {...}再加上分号if就直接结束了
 *  无法继续使用else分支
 *  所以加上do while(0)，表示只执行一次
 * */
#define SWAP_IF(a, b) do {typeof(a) temp = a; a = b; b = temp;} while(0)

int main() {
  int a = 1;
  int b = 0;

  swapInt(&a, &b);
  printf("swapInt a : %d\n", a);
  printf("swapInt b : %d\n", b);
  printf("===============\n");

  double c = 3.0;
  double d = 4.0;
  swap(&c, &d, sizeof(double));
  printf("swap c : %f\n", c);
  printf("swap d : %f\n", d);
  printf("===============\n");

  SWAP(a, b, int);
  SWAP(c, d, double);
  printf("SWAP a : %d\n", a);
  printf("SWAP b : %d\n", b);
  printf("SWAP c : %f\n", c);
  printf("SWAP d : %f\n", d);
  printf("===============\n");

  SWAP_GCC(a, b);
  SWAP_GCC(c, d);
  printf("SWAP_GCC a : %d\n", a);
  printf("SWAP_GCC b : %d\n", b);
  printf("SWAP_GCC c : %f\n", c);
  printf("SWAP_GCC d : %f\n", d);
  printf("===============\n");

//  if(0) => false if(1) => true
// 由于上次交换a = 0
  if(b) SWAP_IF(a, b); else {
    puts("no swap");
  }
  if(c) SWAP_IF(c, d); else {
    puts("no swap");
  }
  printf("SWAP_IF a : %d\n", a);
  printf("SWAP_IF b : %d\n", b);
  printf("SWAP_IF c : %f\n", c);
  printf("SWAP_IF d : %f\n", d);
  printf("===============\n");

  return 0;
}
