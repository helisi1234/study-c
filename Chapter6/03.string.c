//
// Created by helisi on 2021/8/12.
//
#include <stdio.h>
#include "include/print_util.h"

int main() {
//  char string[11] = "Hello World";
//  char string[12] = "Hello World";
//可以直接不设置长度，赋值后会自动创建
  char string[] = "Hello World";
  for (int i = 0; i < 11; ++i) {
    PRINT_CHAR(string[i]);
  }
  // NULL \0 字符串结尾会有一个\0，必须容纳进来才能打印字符串
  printf("%s\n", string);

//  utf8编码，字符串在char[]中的编码
//char[16]
  char string_zh[] = "你好，中国";
//  宽字符数组
//wchar_t[6]
  wchar_t ws[] = L"你好，中国";
  return 0;
}
