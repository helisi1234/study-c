//
// Created by helisi on 2021/8/15.
//

#include "include/fibonacci.h"

unsigned int Fibonacci(unsigned int n) {
  if(n == 0 || n == 1) {
    return 1;
  } else {
    return Fibonacci(n-1) + Fibonacci(n-2);
  }
}
