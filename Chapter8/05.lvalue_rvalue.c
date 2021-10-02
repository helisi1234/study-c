//
// Created by helisi on 2021/8/19.
//

#include <stdio.h>

int main() {
//  左值：内存中的一块空间 右值：要放到内存中的东西
  int a;
  a = 2;

  int *p = &a;
//  指针作为左值时相当于指针地址的值的变量
//  相当于访问a的值
  *p = 2;  //等价 a=2;

  int b = *p;  //等价b=a
  printf("%d\n", b);

//  &a = p;  错误，&a是地址的值是一个常量，常量不能被赋值
//  左值必须是一块内存中的空间
//  *p + 1 = 3;  错误， 等价 3=3 显然错误

  int array[4] = {0};
//  申请一块(int*)大小的内存空间，命名为pa，pa的值是array数组第一个元素的地址
  int *pa = array;
  *pa = 2;
//  在连续内存中赋值，可以使用自增自减，但要注意+-和赋值的顺序，否则会出现空指
//  *(pa++) = 3; ==> *pa = 3; pa++;
//  *(++pa) = 3;
  *(pa + 1) = 3;
  *(pa + 2) = 4;
  *(pa + 3) = 5;
  for (int i = 0; i < 4; ++i) {
    printf("array[%d]=%d\n", i, array[i]);
    printf("*(pa+%d)=%d\n", i, (*(pa+i)));
  }
}
