//
// Created by helisi on 2021/8/10.
//
#include <stdio.h>
#include <stdarg.h>

void HandleVarargs(int arg_count, ...) {
  va_list args;  //定义va_list，获取可变长参数

  //c语言中函数的参数传递是一个一个传的，形参在内存中的位置
  //形参: arg_count  varargs0  varargs1
  //地址: F5940      F5944     F5948
  //只有找到arg_count才能继续往后读，读完所有参数
  va_start(args, arg_count);
  for(int i = 0;i < arg_count;++i) {
    //取出对应参数
    int arg = va_arg(args, int);
    printf("%d:%d\n", i, arg);
  }

  //结束遍历
  va_end(args);
}

int main() {
  HandleVarargs(4, 1, 2, 3, 4);
  return 0;
}

