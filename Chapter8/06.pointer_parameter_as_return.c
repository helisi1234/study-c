//
// Created by helisi on 2021/8/20.
//
#include <stdio.h>
// 指针参数作为返回值
// rbp：指向函数调用栈的指针
int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
//  debug调试
//  info registers rbp
// => rbp  0x61fdd0	0x61fdd0
//  让函数返回
//  info registers rbp
// => rbp  0x61fe20	0x61fe20
//  不是同一个地址
  return sum;
}

void SumIntArray2(int array[], int length, int *sum) {
  for (int i = 0; i < length; ++i) {
    *sum += array[i];
  }
}

/*
 *  函数返回值的过程，需要两次拷贝
 *  1.从函数调用找中将值移动到寄存器中
 *  2.从寄存器中将值存到main中的sum变量所在的内存中
 * */

/*
 *  使用指针参数作为返回值的优点
 *  1.节省上述第2步，使用指针直接存放返回值的地址，不需要从寄存器拷贝
 *    直接在main中读取指针即可
 *  2.实现函数多个返回值的目的 Java调用
 *    const jchar * GetStringChars(JNIEnv *env,jstring string,jboolean *isCopy)
 *    防止与主要返回值冲突
 * */

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int sum = SumIntArray(array, 5);
  printf("%d\n", sum);

  int sum2;
  SumIntArray2(array, 5, &sum2);
  printf("%d\n", sum2);

}

