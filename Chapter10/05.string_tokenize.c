//
// Created by helisi on 2021/9/29.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//拆分字符串
int main() {
// 不能使用char*，strtok函数需要修改字符串所以不能传入char const*
  char string[] = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";

// 使用结构体保存语言和时间
  typedef struct {
    char *name;
    int year;
  } Language;

// 定义分隔符
  const char *language_break = ";";
  const char *field_break = ",";

// 动态分配空间
  int language_capacity = 3;
  int language_size = 0;
  Language *languages = malloc(sizeof(Language) * language_capacity);
// 分配出错直接退出
  if(!languages) {
    abort();
  }

// 分割过程，先分割","，然后分割";"
// strtok(需分割的字符串,指定的分隔符)，当需分割的字符串传入NULL时，表示继续上次分割的
// 字符串继续分割
  char *next = strtok(string, field_break);
  while(next) {
    Language language;
    language.name = next;
    next = strtok(NULL, language_break);
    if(next) {
      language.year = atoi(next);

//    判断是否超过创建容量
      if(language_size + 1 >= language_capacity) {
        language_capacity *= 2;
//      重新分配
        languages = realloc(languages, sizeof(Language) * language_capacity);
        if(!languages) {
          abort();
        }
      }

      languages[language_size++] = language;

      next = strtok(NULL, field_break);
    }
  }

  printf("languages: %d\n", language_size);
  printf("languages capacity: %d\n", language_capacity);

  for (int i = 0; i < language_size; ++i) {
    printf("Language[name=%s, year=%d]\n", languages[i].name, languages[i].year);
  }

  free(languages);

  return 0;
}

