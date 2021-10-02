//
// Created by helisi on 2021/8/21.
//
// 函数指针

//cdecl.org查询类型

#include <stdio.h>
#include <stdlib.h>

//例1. int *f1(int, double);
// * 比 ()的优先级低，等价于 int *(f1(int, double))，f1就是一个普通函数
// 接收int和double，返回一个int*

//例2. int (*f2)(int, double);
// f2是一个[int (int,double)]类型的函数指针，接收int和double，返回int

//例3. int *(*f3)(int, double);
// f3是一个函数指针，接收int和double，返回int*

//例4. C语言不支持返回数组，但假设可以返回
// int (*f4)(int, double)[];
// f4是一个函数指针，接收int和double，返回一个int[]
// int (*f4)(int, double)[]; ~ int a[]; (*f4)(int, double)是一个整体

//例5. int (*f5[])(int, double);
// []比*优先级高，f5是一个数组，一个指针类型的数组
// 指针是 int (int,double) 类型的函数指针

//例6. int (*f5)[](int, double); 错误写法，但假设可以支持，函数不能是数组
// 返回函数的数组，等价 int f[](int, double); (*f5)看作整体
// 函数不能定义数组，函数的指针可以定义数组

//typedef给类型起一个别名
typedef int (*Func)(int, double);
typedef int ArrayInt[];

int Add(int left, double right) {
  return (int)(left + right);
}


void InitPointer(int **ptr, int length, int default_value) {
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}

int main() {
  int a;
//  指针类型的定义：类型不变 + * + 指针变量名 int *p
  int *p;
  ArrayInt array_int = {1, 2, 3, 4, 5};

  for (int j = 0; j < 5; ++j) {
    printf("%d ", array_int[j]);
  }
  printf("\n");

  printf("%x\n", &main);
  printf("%x\n", &InitPointer);

//  定制一个变量指向函数（保存函数地址）
//  定义一个指针变量 func
//  类型是void (int **ptr, int length, int default_value)这个函数
  void (*func)(int **ptr, int length, int default_value) = &InitPointer;

//  使用func和InitPointer一样
  func(&p, 10, 0);
  InitPointer(&p, 10, 0);

//  类似数组，函数名也是函数地址
  (*func)(&p, 10, 0);
  (*InitPointer)(&p, 10, 0);

  for (int i = 0; i < 10; ++i) {
    printf("%d ", p[i]);
  }
  printf("\n");

  free(p);

  Func func1 = &Add;
  int result = func1(1, 2.0);
  printf("%d\n", result);

  return 0;
}

