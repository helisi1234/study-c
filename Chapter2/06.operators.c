//
// Created by helisi on 2021/8/7.
//
#include <stdio.h>

int main() {
  int first = 0;
  int second;
  int third;

  //等号 从右往左计算
  third = second = first;

  int left, right;
  left = 2;
  right = 3;

  //四则运算符的优先级大于赋值符
  int sum;
  sum = left + right; // 5
  int diff = left - right; // -1
  int product = left * right; // 6
  int remainder = left % right; // 取余 2

  // 整形除以整形会从整数位开始截断
  int quotient = left / right; // 0.6666
  // 浮点数赋值整形也会从整数位开始截断
  int quotient_1 = left * 1.f / right; // 0.6666
  // 整数转成浮点数再用浮点数接收才会保存全部数值
  float quotient_corrent = left * 1.f / right; //0.6666

  printf("quotient:%d\n", quotient);
  printf("quotient:%d\n", quotient_1);
  printf("quotient_corrent:%d\n", quotient_corrent);

  //比较符 < <= == >= > !=
  //c99后引入 _bool但本质还是整形
  //true=1 false=0
  printf("3 < 2: %d\n", 3 < 2);
  printf("3 <= 2: %d\n", 3 <= 2);
  printf("3 == 2: %d\n", 3 == 2);
  printf("3 >= 2: %d\n", 3 >= 2);
  printf("3 > 2: %d\n", 3 > 2);
  printf("3 != 2: %d\n", 3 != 2);

  //逻辑符 && ||
  //逻辑符从左到右运算
  //&&：有一个子式为false结果为false  ||：有一个子式为true结果为true
  //短路情况 &&：左边的子式为false时右边的子式不会被运算 ||：左边的子式为true时右边的子式不会被运算
  printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

  // ++ --
  // 只能作用在变量上操作内存，常量不能
  int i = 1;
  int j = i++; // j = 1,i = 2
  int k = ++i; // k = 3,i = 3

  //位运算 & | ^ ~
  //开关操作，一个32位的整形可以创建32个开关
#define FLAG_VISIBLE 0x1  // 2^0, 0001
#define FLAG_TRANSPARENT 0x2  // 2^1, 0010
#define FLAG_RESIZABLE 0x4  // 2^2, 0100
  int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT;  // 0110
  int resizable = window_flags & FLAG_RESIZABLE;  // 0100
  int visible = window_flags & FLAG_VISIBLE;  // 0000

  //移位符 <<：左移  >>：右移
  // 左移一位 ~ *2
  // 右移一位 ~ /2
#define FLAG_VISIBLE_2 1 << 0  // 2^0, 0001
#define FLAG_TRANSPARENT_2 1 << 1  // 2^1, 0010
#define FLAG_RESIZABLE_2 1 << 2  // 2^2, 0100
  int x = 1000;
  x*2;
  x << 1;
  x / 2;
  x >> 1;
  return 0;
}

