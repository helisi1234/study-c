//
// Created by helisi on 2021/8/7.
//
#include <stdio.h>

int main() {
  char command = 'y';
  while(command != 'q') {
    printf("aabbccdd");
    command = getchar();
  }

  char command_2 = 'y';
  do{
    printf("aabbccdd");
  }while(command_2 != 'q');

  int i = 0;
  begin:
  printf("%d\n", i);
  if(i++ < 5) {
    goto begin;
  }

  int sum;
  for(int i = 0;i < 100;i ++) {
    if(i % 2 == 0) {
      sum = sum + i;
    }
  }
  printf("%d\n", sum);

  int sumij = 0;
  for (int i = 0,j = 0; j < 100 && i < 100; ++j, ++i) {
    sumij += i * (i + j);
  }
}

