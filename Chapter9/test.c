//
// Created by helisi on 2021/9/20.
//
#include <stdio.h>

typedef struct Node {
  int a;
} Node;

int main() {
  Node *node1 = NULL;
  if(!node1) {
    printf("if分支\n");
  } else {
    printf("else分支\n");
  }
  return 0;
}
