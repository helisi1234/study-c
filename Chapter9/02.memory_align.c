//
// Created by helisi on 2021/9/3.
//
#include <stdio.h>
#include <stddef.h>
// 内存对齐
/*
 * 结构体:
 * typedef struct Person {
 *   char *name;
 *   int age;
 *   char *id;
 * }Person;
 * 内存占用:
 * 00 c0 f8 fe    f7 7f 00 00    ->    对应 char *name(占用8字节)
 * 00 00 00 00    cc cc cc cc    ->    对应 int age(占用4字节)
 * 10 c0 f8 fe    f7 7f 00 00    ->    对应 char *id(占用8字节)
 * 在内存中有一块 cc cc cc cc 这块内存空出来了，没有被使用，这块空间的意义
 * 是让下一个字段 char *id 对齐到8的倍数的位置
 * 不同编译器有不同实现，但默认对齐的位置是自己占用内存大小的倍数，占用8字节
 * 就对齐到8的倍数(0，8，16，24)，占用4字节就对齐到4的倍数(0，4，8，16)
 * */
// 手动设置对齐
// 只要是2的倍数就对齐
//#pragma pack(2)
int main() {
  /*
   *  此时内存占用24个字节
   *  61 62 cc cc    03 00 00 00
   *  04 00 cc cc    cc cc cc cc
   *  00 00 00 00    00 00 14 40
   *  61 -> char a;  62 -> char b;
   *  cc cc 此时发生内存对齐，int必须在4的倍数，所以空出两个字节
   *  03 00 00 00 -> int c;
   *  04 00 -> short d;
   *  cc cc    cc cc cc cc 同上，double在8的倍数，空出6个字节
   * */
  typedef struct {
    char a;  //占用1字节
    char b;  //占用1字节
    int c;  //占用4字节
    short d;  //占用2字节
    double e;  //占用8字节
  } Align;
  Align align = {'a', 'b', 3, 4, 5.0};

//  使用attribute在结构体内部优化某个字段
//  只有gcc支持
//  必须注释掉#pragma pack(2)才能生效
  typedef struct {
    char a;  //占用1字节
    char b;  //占用1字节
//    __attribute((aligned(2))) int c;  //占用4字节
//    使用Alignas对字段进行优化，Alignas函数的参数必须大于需要优化的字段的占用字节数
//    以8为例，这个函数只有c11后才有
    _Alignas(8) int c;
    short d;  //占用2字节
    double e;  //占用8字节
  } Align_3;
  Align_3 align_3 = {'a', 'b', 3, 4, 5.0};

//  计算字段相对于首地址偏移的字节
//  查看字段在结构体中的偏移量
  printf("%d\n", _Alignof(align_3.c));
//  offsetof(object, fields)
//  offsetof的实现
//  #define offsetof(s, m) ((size_t)&(((s*)0)->m))
//  s*：传入的类型的指针
//  (s*)0：0是null指针，将null强转成s*类型
//  ((s*)0)->m：通过这个指针指向m这个字段
//  &(((s*)0)->m)：取这个字段的地址，在某些环境下不能这么写
//  因为首地址是0，所以取到的地址就是偏移量
  printf("%d\n", offsetof(Align_3, c));

//  调整顺序优化结构体
  /*
   *  此时内存只占用16个字节
   *  61 62 03 00    04 00 00 00
   *  00 00 00 00    00 00 14 40
   * */
  typedef struct {
    char a;
    char b;
    short d;
    int c;
    double e;
  } Align_2;
  Align_2 align_2 = {'a', 'b', 3, 4, 5.0};

  return 0;
}
