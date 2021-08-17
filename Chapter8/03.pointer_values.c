//
// Created by helisi on 2021/8/18.
//
#include <stdio.h>

int *pointer_at_large;

void DangerousPointer() {
//  函数中的自动变量定义在栈中，当函数结束后会被弹出，但占用的内存空间依然被
//  指针指向，此时如果对指针操作就会产生错误
  int a = 2;
  pointer_at_large = &a;
//  do something

//  对于函数中需要指向自动变量，在函数结束时需要手动置为NULL
  pointer_at_large = NULL;
}

int main() {
//  注意点一：不能对指针硬编码
//  int *p = (int *)0x65fe18;  危险的操作，不知道这个地址能不能访问，

//  注意点二：不能对NULL指针赋值
  int *p = NULL;
//  *p = 3;  报错，NULL是0地址，但0地址不是一个真实存在的内存空间

//  注意点三：避免野指针
//  野指针就是指向变动的内存空间
}

