//
// Created by helisi on 2021/7/31.
//
#include <stdio.h>
/**
 *   this program calculate summary from 0 to 9
 *   @param argc parameter count
 *   @param argv parameters
 *   @return 0
 * */
int main(int argc, char **argv) {
  int sum = 0;
  int i = 0;
  for (; i < 10; ++i) {
    sum = sum + i;
  }
  printf("%d\n", sum);
  return 0;
}

