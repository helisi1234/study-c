//
// Created by helisi on 2021/8/7.
//
#include <stdio.h>

//定义宏
#define COLOR_RED 0xFF0000
#define COLOR_GREEN 0x00FF00
#define COLOR_BLUE 0x0000FF

//程序就是操作内存中的变量
int main() {
  //const <type> readonly
  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x0000FF;
  printf("kRed:%d\n", kRed);

  int *p_k_red = &kRed;
  *p_k_red = 0;
  printf("kRed:%d\n", kRed);

  //macro
  //使用宏 属于替换操作不属于变量 字面量的马甲 预处理后替换成常量
  printf("COLOR_RED:%d\n", COLOR_RED);

#undef COLOR_RED

  //字面量 literal
  3; //整形
  3u; //无符号整形
  3l; //长整型
  3.f; //float
  3.9; //double
  'c'; //char
  "cs"; //string
  L'中'; //宽字符
  L"中国"; //宽字符串
}
