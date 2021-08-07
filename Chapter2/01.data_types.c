#include <stdio.h>
#include <limits.h>

int main() {
  //开辟一块内存空间，把0填入这块空间
  int i = 0;
  /*
   * C语言标准没有具体要求short_int,long_int具体长度，但要求
   * short_int长度不能低于(2 Byte)16位
   * long_int长度不能小于(4 Byte)32位
   * */
  short short_int = 0;
  printf("short_int = %hd\n", short_int);
  printf("short_int in hex = %x\n", short_int);
  printf("short_int in oct = %o\n", short_int);
  long long_int = 0;
  long long longlong_int = 0;
  //无符号数
  unsigned int unsigned_int = 123;

  // %x: hex
  // %o: oct
  // %hd: short decimal
  // %d: decimal
  // %ld: long decimal
  // %lld: long long decimal
  // %u: unsigned int
  // %hu: unsigned short int
  // \n: new line
  // size_t
  size_t size_of_int = sizeof(int);
  printf("int size: %d\n", sizeof(int));
  printf("long int size: %ld\n", sizeof(long int));
  printf("long long int size: %lld\n", sizeof(long long int));
  //range of int type
  printf("int [MIN:%d, MAX:%d]\n", INT_MIN, INT_MAX);
  //range of unsigned int type
  printf("unsigned int [MIN:%d, MAX:%u]\n", 0, UINT_MAX);

  return 0;
}