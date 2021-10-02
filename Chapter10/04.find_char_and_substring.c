//
// Created by helisi on 2021/9/25.
//
#include <stdio.h>
#include <string.h>

// 字符串的查找
int main() {
  char *string = "Hello World!";
//  从前往后查
  char *result = strchr(string, 'l');
//  从后往前查
  char *result_reverse = strrchr(string, 'l');
  puts(result);
  puts(result_reverse);

//  查找字串所在位置
  char *substring_position = strstr(string, "Wor");
  puts(substring_position);
//  字串起始位置在原字符串的偏移量
  printf("%d\n", substring_position - string);

  char *string2 = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";
  char *break_set = ",;";
  int count = 0;
  char *p = string2;

//  p不为NULL
  do{
    p = strpbrk(p, break_set);
    if(p) {
//      打印p指向的字符串
      puts(p);
      p ++;
      count ++;
    }
  }while(p);

  return 0;
}

