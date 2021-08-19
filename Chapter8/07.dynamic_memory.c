//
// Created by helisi on 2021/8/20.
//
#include <stdio.h>
#include <stdlib.h>

#define PLAYER_COUNT 10

/* C语言的变长数组支持动态数组的分配，但这个数组的长度一旦确定就不能改了
 * 不够灵活，同时如果变长数组定义在函数中那么它的作用域就在函数内部，一旦
 * 函数结束那么就会被弹出，占用的内存就被销毁了，不能控制它的生命周期
 */

// 动态分配就是从堆上分配一块区域用来保存

/*
 *  使用指针常见错误
 *  1.使用后忘记释放内存
 *  2.使用已经释放的内存
 *  3.使用超出边界的内存
 *  4.改变内存的指针，导致无法正常释放
 *    使用iclloc()返回一个唯一指针指向分配的空间，这个时候不能改这个指针的值，否则
 *    这块堆空间已经被分配占用，但找不到了(使用这个指针堆别的指针赋值后再改值除外)
 *  5.避免修改指向已分配的内存的指针
 *  6.对于free之后的指针主动置为NULL
 *  7.避免将过多的指针指向同一块动态分配的内存
 *  8.动态内存遵从谁分配谁释放的原则
 * */

#include <stdio.h>

//  由于在堆上分配，存储的值可能是上一次分配后残留的值，所以需要创建时进行初始化

//  错误写法，由于players在传参的时候传入的是拷贝，所以在函数内部对ptr的赋值完全
//  和players没有关系，影响不到。
//void InitPointer(int *ptr, int length, int default_value) {
//  ptr = malloc(sizeof(int) * length);
//  for (int i = 0; i < length; ++i) {
//    ptr[i] = default_value;
//  }
//}

//如果想要修改一个变量，要将它的指针传入进去，否则传入的都是拷贝
//修改指针就要传入指针的指针，修改int就传入int*
void InitPointer(int **ptr, int length, int default_value) {
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}


int main() {
//  分配在堆区
  int *players;
  InitPointer(&players, PLAYER_COUNT, 0);

//  仅仅希望创建的数组初始值为0可以使用calloc
  int *players2 = calloc(PLAYER_COUNT, sizeof(int));
//  重新分配
  players2 = realloc(players2, PLAYER_COUNT * 2 * sizeof(int));

  for (int j = 0; j < PLAYER_COUNT; ++j) {
    printf("%d ", players[j]);
  }

//  内存分配失败，会出现空指针
//  要进行空判断
  if(players) {
    // do something
    free(players);
  } else {

  }

//  由于分配在堆区，所以函数返回也不会被释放
//  手动调用free
  free(players2);
}