//
// Created by helisi on 2021/8/17.
//
#include <stdio.h>

int main() {
  int a;
  int b = 5;
//  在内存中申请一块int*大小内存，将它命名为p，这块内存中存储a的地址（p的值）
  int *p = &a;

//  *pp = p = &a
  int **pp = &p;
  printf("%x\n", *pp);
  printf("%x\n", p);

  *p = 20;

  printf("%d\n", *p);
  printf("%d\n", a);

//  const修饰的是指针不能改，还是const指针指向的便改良不能改？
//  const修饰的时候倒着读，和优先级高的符号结合

//  这是一个const的指针指向一个整形变量
//  cp不能被修改
  int *const cp = &a;
  *cp = 3;  //不会报错
//  cp = &b;  会报错

//  这是一个指针指向一个不能被修改的int const变量
  int const *cp2 = &a;
//  *cp2 = 2;  会报错
  cp2 = &b;  //不会报错

//  这是一个const的指针指向了int const变量
//  ccp不能被修改，指向的变量a也不能被修改
  int const *const ccp = &a;
//  *ccp = 3;  会报错
}

