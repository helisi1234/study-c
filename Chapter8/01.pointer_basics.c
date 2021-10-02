#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
//  指针中存的是另一个变量的地址
//  类型名+* 就是这个类型对应的指针类型
  int *p = &a;
//  p也是int类型，可以使用%d打印，但由于指针保存的是地址，通常使用十六进制打印
//  设：b=1 printf("%d\n", b); 打印b 同理p中保存的是也是一个值（一个变量的地址）
  printf("&a = p = %d\n", p);
  printf("(hex)&a = p = %x\n", p);
//  int指针占用空间大小，64位 8Byte、32位 4Byte
  printf("sizeof(int*) = %d\n", sizeof(int *));
//  debug(64位): input 111
//  a = 111
//  *p = 111
//  p = 00 61 fe 14
//  &a = 00 61 fe 14
//  &p = 00 61 fe 18
//  00 cb f7 60: 00 cb f7 68 | cc cc cc cc | 00 00 00 6f
//  p和&a的值相同，表示a的地址 &p:p的地址

//  定义时 *表示运算符，赋值时 *表示取出指针指向变量的值，即a的值
//  （内存空间中）变量p存储的值是变量a的地址，指针作为右值(*p)找到内存中变量a的位置
//  然后取出变量a的值
  int b = *p;
  printf("b = %d\n", b);
  printf("*p = %d\n", *p);
  return 0;

  /*
   *  一种判断指针类型的方式，去掉指针名剩下的就是指针类型
   * */
}