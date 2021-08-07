//
// Created by helisi on 2021/8/7.
//
#include <stdio.h>
#include <stdbool.h>

int main() {

  _Bool  is_enabled = true;
  bool is_visiable = false;

#define MAGIC_NUMBER 10
  int user_input;
  printf("Please input a number: \n");
  scanf("%d", &user_input);
  if(user_input > MAGIC_NUMBER) {
    printf("Your number is bigger");
  } else if(user_input < MAGIC_NUMBER) {
    printf("Your number is smaller");
  } else {
    printf("You got it");
  }

  int is_open = is_enabled && is_visiable ? 1 : 0;
  printf("is_open: %d\n", is_open);

#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left;
  int right;
  char operator;
  printf("Please input an expression: \n");
  scanf("%d %c %d", &left, &operator, &right);
  int result;
  switch(operator) {
    case ADD:
      result = left + right;
      break;
    case SUB:
      result = left - right;
      break;
    case MULTIPLY:
      result = left * right;
      break;
    case DIVIDE:
      result = left / right;
      break;
    case REM:
      result = left % right;
      break;
    default:
      printf("unsupported operator: %c\n", operator);
      return 1;
  }
  printf("result: %d\n", result);
  return 0;
}