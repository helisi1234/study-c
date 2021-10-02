//
// Created by helisi on 2021/9/29.
//

// 宽字符与窄字符
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>

int main() {

  iswalpha(L'A');
  iswdigit(L'2');

  wchar_t *wcs = L"你好 Hello";
//  宽字符长度
  size_t length = wcslen(wcs);
  printf("wcs length: %d\n", length);

  wchar_t src[] = L"HelloWorld";
  wchar_t *dest = malloc(sizeof(wchar_t) * 11);

  wmemset(dest, 0, 11);
  wmemcpy(dest, src, 11);

  wprintf(dest);
  printf("\n");

//从dest+1位置往后4个字节复制到dest+3后面
  wmemcpy(dest + 3, dest + 1, 4);

  wprintf(dest);

  free(dest);
  printf("\n");
/*
 *  mb: multibytes 窄字符
 *  mbs: multibytes string 窄字符串
 *  wc: wide character 宽字符
 *  wcs: wide character string 宽字符串
 * */
  char *new_locale = setlocale(LC_ALL, "zh_CN.utf8");
  if(new_locale) {
    puts(new_locale);
  }

  {
    char mbs[] = "你好";
    wchar_t wcs[10];
    mbstowcs(wcs, mbs, 10);
    wprintf(L"%s\n", wcs);
  }

  return 0;
}