//
// Created by helisi on 2021/8/11.
//
//条件编译，保证头文件只被定义一次
//头文件可以被引入多个文件中，如果编译时发现多个函数原型会报错
//#ifndef CHAPTER4_INCLUDE_FACTORIAL_H_  如果没有定义这个宏
//#define CHAPTER4_INCLUDE_FACTORIAL_H_  定义宏
//#endif //CHAPTER4_INCLUDE_FACTORIAL_H_ 结束
#include <stdio.h>

//做c和c++的替换
#ifdef __cplusplus
extern "C" {
#endif
//.....
int Add(int left, int right);
#ifdef __cplusplus
};
#endif

/*
 *  1.#ifdef 如果定义了
 *  2.#ifndef 如果没定义
 *  3.#if 如果
 *
 *  #endif
 *
 *  #if define(MACRO) == #ifdef MACRO
 * */

//有两种方式定义，程序内或者CMakeLists.txt，调试时使用
#define DEBUG

void dump(char *message) {
//  如果定义了DEBUG这个宏就打印message
#ifdef DEBUG
  puts(message);
#endif
}

int main() {
  dump("Start");
  dump("end");

#if __STDC_VERSION__ >= 201112
  puts("C11!!");
#elif __STDC_VERSION__ >= 199901
  puts("C99!!");
#else
  puts("maybe C90!!");
#endif

  return 0;
}
