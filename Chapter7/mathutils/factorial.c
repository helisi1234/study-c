//
// Created by helisi on 2021/8/15.
//

#include "include/factorial.h"

unsigned int Factorial(unsigned int n) {
  if(n == 0) {
    return 1;
  } else {
    return n * Factorial(n-1);
  }
}

