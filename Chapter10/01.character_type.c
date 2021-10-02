#include <stdio.h>
#include <ctype.h>

//判断字符类型
/*
 *  使用查表的方式实现(ubuntu编译器)小端序
 *  宏定义
 *  #define isdigit(c) __isctype((c), _ISdigit)
 *
 *  isctype也是一个宏
 *  #ifndef __cplusplus
 *  # define __isctype(c, type) \
 *    ((*__ctype_b_loc ())[(int) (c)] & (unsiggned short int) type)
 *  #elif defined __USE_EXTERN_INLINES
 *
 *  __ctype_b_loc是一个函数,返回一个指针的指针,相当于二维数组
 *  extern const unsigned short int **__ctype_b_loc (void)
 *
 *  isctype宏里面
 *  先对__ctype_b_loc解引用(变成一维数组),根据传入的c这个字符查找(查表的过程)
 *  此时已经得到这个字符所有信息
 *
 *  按位与操作
 *  _ISdigit    & (unsiggned short int) type
 *  type是枚举
 *  enum {
 *    ...
 *    _ISdigit = _ISbit(4),
 *    ...
 *  }
 *
 *  _ISbit也是一个宏
 *  # define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
 *  如果小于8,先左移三个位再左移8个位,字节序的问题
 *  计算后得到一个整数
 *
 *  按位与后的结果不是1,有可能在高位,在高位的话就不是1,只有最低位才是一
 *
 *  digit从0开始往后的第十一个位置上 2048
 * */
int main() {
//  非0都是真
  printf("%d\n", isspace(' '));
  printf("%d\n", isalpha('a'));
  printf("%d\n", isalnum('f'));
  printf("%d\n", isalnum('1'));
  printf("%d\n", ispunct(','));
  printf("%d\n", isdigit('2'));
  return 0;
}