//
// Created by helisi on 2021/8/18.
//
#include <stdio.h>

//指针的运算

int main() {

//  对指针的运算，(当前指针的值)+(对应类型占用空间大小)

  printf("=====int=====\n");
  {
    int a = 2;
    int *p = &a;
    int **pp = &p;
    printf("%x\n", p + 1);
    printf("%x\n", p);
    printf("%d\n", sizeof(int));
    printf("%x\n", pp + 1);
    printf("%x\n", pp);
    printf("%d\n", sizeof(int *));
  }
  printf("=====double=====\n");
  {
    double a = 2.0;
    double *p = &a;
    double **pp = &p;
    printf("%d\n", p + 1);
    printf("%d\n", p);
    printf("%d\n", sizeof(double));
    printf("%d\n", pp + 1);
    printf("%d\n", pp);
    printf("%d\n", sizeof(double *));
  }
  printf("=====array=====\n");
  {
    int array[] = {0, 1, 2, 3, 4};
    int *p = array;
    printf("%d\n", *(p + 3));
    printf("%d\n", array[3]);
    printf("%d\n", *(array + 3));
    printf("%d\n", p[3]);
    //  数组名相当于一个常量指针，可以修改指向地址的对应的值，但不能修改对应地址
//    等价 int *const array_p = array;

//  指针的比较必须在连续内存中才能使用
    if((*(p+3)) > (*(p+1))) {
      printf("p+3(%d) > p+1(%d)\n", *(p+3), *(p+1));
    } else if((*(p+3)) < (*(p+1))) {
      printf("p+3(%d) < p+1(%d)\n", *(p+3), *(p+1));
    } else {
      printf("p+3(%d) = p+1(%d)\n", *(p+3), *(p+1));
    }

    int array_2[] = {3, 4};
    int *p_2 = array_2;
//    if((*(p_2+1)) > (*(p+1)))  报错，不在同一片连续内存
  }

}