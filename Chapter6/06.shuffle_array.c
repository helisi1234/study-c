//
// Created by helisi on 2021/8/13.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50

void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
//  随机数需要使用time
  srand(time(NULL));
//  [0, RAND_MAX]
//  int random_number = rand() % length;

//  这种方法会计算出同样的随机数，因为随机数的范围一直在[0, random_number]中
//  所以需要修改随机数范围
//  for (int i = 0; i < length; ++i) {
//    int random_number = rand() % length;
//    将当前位置与随机数位置交换
//    SwapElements(array, i, random_number);
//  }

//  对0取余会报错
  for (int i = length-1; i > 0; --i) {
    int random_number = rand() % i;
    SwapElements(array, i, random_number);
  }
}

int main() {

  int players[PLAYER_COUNT];
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    players[i] = i;
  }

  ShuffleArray(players, PLAYER_COUNT);

  for (int j = 0; j < PLAYER_COUNT; ++j) {
    printf("%d,", players[j]);
  }

  return 0;
}
