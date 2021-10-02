//
// Created by helisi on 2021/9/29.
//

//c11添加的安全版本函数
//gcc不支持安全版本函数
//一般需要添加一个宏，在程序中进行判断
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main() {

#ifdef __STDC_LIB_EXT1__
  puts("support c11 safe version");
#else
  puts("no support for c11 safe version");
#endif

  char dst[2];
  int error_no = strcpy_s(dst, 2, "Too long!");
  printf("%d\n", error_no);
  if(error_no) {
    perror("strcpy_s returns: ");
  }

  return 0;
}
