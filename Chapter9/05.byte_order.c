//
// Created by helisi on 2021/9/10.
//
#include <stdio.h>
/*
 * 判断大端序和小端序
 * 01 02 03 04
 * 小端序：0x04030201
 * 大端序：0x01020304
 * 字节序与cpu读取顺序有关
 * */
int IsBigEndian() {
  /*
   * 0x100
   * 小端序：00 01
   *      c[0] c[1]
   * 大端序：01 00
   *      c[0] c[1]
   * 如果c[0]是1就是大端序
   * */
  union {
    char c[2];
    short s;
  } value = {.s = 0x100};
  return value.c[0] == 1;
}

int IsBigEndian_2() {
  short s = 0x100;
  char *p = (char *)&s;
  return p[0] == 1;
}

//字节序转换
int ToggleEndian(int original) {
  union {
    char c[4];
    int i;
  } value = {.i = original};
  char temp = value.c[0];
  value.c[0] = value.c[3];
  value.c[3] = temp;
  temp = value.c[1];
  value.c[1] = value.c[2];
  value.c[2] = temp;
  return value.i;
}

int ToggleEndian_2(int original) {
  char *p = (char *)&original;
  char temp = p[0];
  p[0] = p[3];
  p[3] = temp;
  temp = p[1];
  p[1] = p[2];
  p[2] = temp;
  return original;
}

int main() {
  int res = IsBigEndian();
  if(res == 0) {
    printf("大端序\n");
  } else {
    printf("小端序\n");
  }
  return 0;
}
