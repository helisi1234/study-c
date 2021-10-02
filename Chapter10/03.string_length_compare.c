//
// Created by helisi on 2021/9/20.
//
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/*
 *  快速排序
 *  需要修改交换变量的类型，原来是char *类型
 *  修改成char *类型
 * */
void SwapChar(char * *first, char * *second) {
  char * temp = *first;
  *first = *second;
  *second = temp;
}

void Shuffle(char * *array, int length) {
  srand(time(NULL));
  for (int i = length-1; i > 0 ; --i) {
    int random_number = rand() % i;
    SwapChar(array + i, array + random_number);
  }
}

char * *Partition(char * *low, char * *high) {
  char * piovt = *(low + (high - low) / 2);
  char * *p = low;
  char * *q = high;

  while(1) {
    while(strcmp(*p, piovt) < 0)
      p ++;
    while(strcmp(*q, piovt) > 0)
      q --;
    if(p >= q)
      break;
    SwapChar(p, q);
  }

  return q;
}

void QuickSort(char * *low, char * *high) {
  if(low >= high)
    return;
  char * *partition = Partition(low, high);
  QuickSort(low, partition-1);
  QuickSort(partition+1, high);
}

//字符串的长度与比较
char * main() {
/*
 * C语言中字符串以NULL结尾，只需要从起始地址到NULL的地址就能知道字符串长度
 * */
  char *string = "Hello World!";
  printf("%d\n", strlen(string));
//  限定一个统计长度范围，最多统计100个字符
//  strnlen(string, 100); gcc
//  strnlen_s(string, 100); c11 msvc

/*
 *  比较字符串
 * */
  char *left = "Hello World!";
  char *right = "Hello C Programmers!";
/*
 *  strcmp()比较字符串的全部字符
 *  strncmp()比较设定数量的字符数量
 *  判断第一个不同的字母
 *  相同          返回 0
 *  left在right前 返回 -1
 *  right在left前 返回 1
 **/
  printf("%d\n", strcmp(left, right));
  printf("%d\n", strncmp(left, right, 5));

//  字符串数组排序
  char *names[] = {
      "Cindy",
      "Don",
      "Andrey",
      "Elsa",
      "George",
      "Frank",
      "Benny",
  };
  QuickSort(names, names+6);

  for (int i = 0; i < 7; ++i) {
    printf("%s, ", names[i]);
  }

  return 0;
}