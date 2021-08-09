//
// Created by helisi on 2021/8/10.
//
#include <stdio.h>

// f(n) = n*f(n-1) f(1) = 1
unsigned int Factorial(unsigned int n) {
  if(n == 1) {
    return 1;
  }else {
    return n * Factorial(n - 1);
  }
}

unsigned int FactorialIteration(unsigned int n) {
  unsigned int result = 1;
  for (unsigned int i = n;i > 0; --i) {
    result = result * i;
  }
  return result;
}

//斐波那契
//0 1 1 2 3 5
unsigned int Fibonacci(unsigned int n) {
  if(n == 0 || n == 1) {
    return n;
  }else {
    return Fibonacci(n-1) + Fibonacci(n-2);
  }
}

unsigned int FibonacciTterator(unsigned int n) {
  if(n == 1 || n == 0) {
    return n;
  }
  unsigned int last = 0;
  unsigned int current = 1;
  for (int i = 0;i <= n-2;++i) {
    unsigned int temp = current;
    current = current + last;
    last = temp;
  }
  return current;
}

int main(void) {
  return 0;
}

