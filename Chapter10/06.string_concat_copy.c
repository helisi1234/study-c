//
// Created by helisi on 2021/9/29.
//
#include <stdio.h>
#include <string.h>

//字符串的连接和复制
int main() {

  char src[] = "HelloWorld";
  char dest[20] = "C said: ";
//  strcat(dest, src);
  strcpy(dest + strlen(dest), src);
  puts(dest);
  return 0;
}
