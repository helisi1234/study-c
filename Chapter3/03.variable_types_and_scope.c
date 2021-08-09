//
// Created by helisi on 2021/8/9.
//
#include <stdio.h>

//文件作用域，这个文件内有效
int global_var = 1;

//函数原型作用域
double Add(double a, double b);
//访问size这个变量
double Sort(int size, int array[size]);

void LocalStaticVar(void) {
  // static变量作用域整个文件有效，且自动赋初始值
  // 内存不会因函数退出而销毁
  // int初始值位 0
  static int static_var;
  // 函数内有效即函数占用的栈空间内有效，不能自动赋值
  int non_static_var;

  printf("%d\n", static_var);
  printf("%d\n", non_static_var);
}

void CleanMemory() {
  int eraser = -1;
}

//内存
void PassByMemory(int parameter) {
  printf("%d\n", parameter);
}

//寄存器，不会再内存中占用空间
void PassByRegister(register int parameter) {
  printf("%d\n", parameter);
}

int main() {
  //  自动变量，等价直接定义
  //  auto int value = 0;
  // 函数，块作用域随函数和块的退出而销毁
  // 没有初始值
  int value = 0;

  //块作用域，块外无法访问
  {
    auto int a = 0;
    printf("%d\n", a);
  }
  //  printf("%d\n", a);
  // if/else同理
  // 能访问value因为在main()块里面
  if(value > 0) {
    int if_block_value = 0;
  }else {
//    printf("%d\n", if_block_value); 无法访问
  }
  //    printf("%d\n", if_block_value); 无法访问

  LocalStaticVar();
  CleanMemory();
  //不对非static变量赋值，那么它有可能被赋值成上一个函数定义的变量的值
  LocalStaticVar();
  CleanMemory();
  LocalStaticVar();

}
