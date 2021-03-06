//
// Created by helisi on 2021/8/11.
// 有参数的宏成为宏函数
//
#include <stdio.h>

// 宏函数的参数没有类型，返回值也没有类型
// 定义宏函数
// 如果不加括号，宏函数的替换是原封不动的替换，当传入表达式的时候会报错，不会先求出表达式的值再传入
#define MAX(a, b) a > b ? a : b
// 加上括号就能处理传入表达式
#define MAX2(a, b) (a) > (b) ? (a) : (b)

// 定义宏的时候换行
// 检验字符是否是十六进制的字符
#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f')

/*
 *             宏                          函数
 *  代码长度    每次使用，宏都被插入到程序中    函数代码只出现在一个地方，每次
 *             代码长度将大大增长            使用这个函数只调用那个地方用一份代码
 *  操作符优先级 除非加上括号否则临近的操作符    参数只在函数调用时求职一次，结果值传递
 *             优先级无法估计                给函数，求值结果能预测
 *  参数求值    参数每次用于宏定义时，他们都将  参数在函数被调用前只求值一次，在函数
 *             重新求值，由于多次求值具有负    中多次使用不会导致多次求值问题，参数
 *             作用域的参数可能产生不可预料    副作用不会有问题 如：max++
 *             的结果
 *  参数类型    宏与类型无关，只要参数的操作    函数参数与类型有关，如果类型不同就需使用
 *             是合法的，可以适用于任何参数    不同函数
 * */

int Max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int max = MAX(1, 3);
  int max2 = MAX2(1, MAX(3, 4));

  int max3 = Max(1, Max(2, 3));

//  int max4 = MAX(max++, 5);
//  错误之一，此处的执行会替换为 (max++, 5) ? (max++) : 5
//  本意是比较max++和5，如果max++大于5返回max++
//  但实际上会再执行一次max++再返回

  printf("is A a hex character? %d\n", IS_HEX_CHARACTER('A'));

  printf("%d\n", max2);
  return 0;
}

