//
// Created by helisi on 2021/8/1.
//
#include <stdio.h>

int main() {
  //字符集 ASCII
  //char用来存字母,本质是整数,用字符集对应
  //计算机存储的都是0 1,要输出整数就直接输出,要输出字符就经过映射输出
  char a = 'a';  //97,当输出整数时会输出字符集对应的整数
  char char_1 = '1';  //49,同理

  //所有的字符都可以用\+对应的整数表示
  //但要求对应的整数必须是八进制的数或十六进制也可以,不能是十进制
  char char_1_escape_oct = '\61';
  char char_1_escape_hex = '\x31';

  //此处的0是存到内存中的,和整数是一样的,不是字符0
  char i = 0;  // \0, NULL
  char newline = '\n';

  // 字面量 literal
  // \n: newline
  // \b: backspace
  // \r: return
  // \t: tab
  // \': 字符字面量 '
  // \": 字符串字面量 "

  printf("char a: %d\n", a);
  printf("char 1: %d\n", char_1);
  printf("char 'i': %c\n", i);
  printf("char i: %d\n", i);

  printf("char_1: %c\n", char_1);  //当输出字符型时,会按照赋值的值
  printf("char_1_escape_oct: %c\n", char_1_escape_oct);
  printf("char_1_escape_hex: %c\n", char_1_escape_hex);

  // 宽字符 unicode字符集
  // c95
  wchar_t zhong = L'中';  //占两个字符
  wchar_t zhong_hex = L'\u4E2D';
  printf("中: %d\n", zhong);
  printf("中: %c\n", zhong);
  printf("中: %d\n", zhong_hex);
  printf("中: %c\n", zhong_hex);

  return 0;
}
