//
// Created by helisi on 2021/9/3.
//
//联合体
#include <stdio.h>

#define OP_PRINT_INT 0
#define OP_PRINT_DOUBLE 1
#define OP_PRINT_STRING 2

//联合体共用一块内存
//联合体的大小是最大内存占用字段的大小
/*
 *  这个结构体中，大小是8字节
 *  当访问int_operand时，就是访问
 *  结构体占用内存的前四个字节
 * */
typedef union Operand {
  int int_operand;  // 4
  double double_operand;  // 8
  char *string_operand;  // 8
} Operand;

typedef struct Instruction {
  int operator;
  Operand operand;
} Instruction;

void Process(Instruction *instruction) {
  switch (instruction -> operator) {
    case OP_PRINT_INT:
      printf("%d\n", instruction -> operand.int_operand);
      break;
    case OP_PRINT_DOUBLE:
      printf("%f\n", instruction -> operand.double_operand);
      break;
    case OP_PRINT_STRING:
      puts(instruction -> operand.string_operand);
      break;
    default:
      fprintf(stderr, "Unsupported operator: %d\n", instruction -> operator);
  }
}
/*
 *  1.只涉及对结构体变量的访问不修改
 *  2.直接在函数中打印不返回值
 *  传入指针或值都可以
 * */
void Process_2(Instruction instruction) {
  switch (instruction.operator) {
    case OP_PRINT_INT:
      printf("%d\n", instruction.operand.int_operand);
      break;
    case OP_PRINT_DOUBLE:
      printf("%f\n", instruction.operand.double_operand);
      break;
    case OP_PRINT_STRING:
      puts(instruction.operand.string_operand);
      break;
    default:
      fprintf(stderr, "Unsupported operator: %d\n", instruction.operator);
  }
}

int main() {

  printf("sizeof(Operand): %d\n", sizeof(Operand));

  Operand operand = {.int_operand = 5, .double_operand = 2.0};
  operand.int_operand = 5;
  operand.double_operand = 2.0;
  /*
   * 此时int_operand会是0
   * 对double_operand赋值后前四个字节已经变成0了
   * double_operand：结构体占用的全部内存，八个字节
   * 00 00 00 00 00 00 00 40
   * int_operand：结构体的前四个字节
   * 00 00 00 00
   * */
  printf("int_operand: %d\n", operand.int_operand);
  printf("double_operand: %f\n", operand.double_operand);

  Instruction instruction = {
      .operator = OP_PRINT_STRING,
      .operand = {
          .string_operand = "Hello World"
      }
  };

  Process(&instruction);
  Process_2(instruction);

  return 0;
}
