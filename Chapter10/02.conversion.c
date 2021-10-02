//
// Created by helisi on 2021/9/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//字符串与其他数值类型的转换
/*
 *  atoX：使用简单，适用于简单，要求不高的场景
 *  strtoX：可重复解析，更安全，功能更强大
 * */
int main() {
/*
 *  第一种 atox
 *  字符串转浮点数 double atof(const char *__nptr)
 *  字符串转整数 int atoi(const char *__nptr)
 *  字符串转长整型 long int atol(const char *__nptr)
 *  字符串转长长整型 long long int atoll(const char *__nptr)
 * */
  printf("%d\n", atoi("1234"));  // 1234
  printf("%d\n", atoi("-1234"));  // -1234
  printf("%d\n", atoi("   1234abcd"));  // 只解析能解析的，abcd不会解析
  printf("%d\n", atoi("0x10"));  // 0，不能解析十六进制

  printf("%f\n", atof("12.34"));  // 12.34
  printf("%f\n", atof("-12e34"));  // -1.2e+35
  printf("%f\n", atof("   1.234abcd"));  // 1.234
  printf("%f\n", atof("0x10"));  // 16
  printf("%f\n", atof("0x10p3.9"));  // 128

/*
 *  第二种 strtox
 *  将字符串转换为有符号整形 strtol, strtoll
 *  将字符串转换为无符号整形 strtoul, strtoull
 *  将字符串转换为浮点型 strtof, strtod, strtold
 *  将字符串转换为所在环境中表示范围最大的整形intmax_t,无符号整形uintmax_t strtoimax strtoumax
 * */
  char const *const kInput = "1 200000000000000000000000000000 3 -4 5abcd bye";
  printf("Parse: %s\n", kInput);
//  start指向kInput的起始处
  char const *start = kInput;
//  end指向已经转换为数值的字符位置的下一个位置
  char *end;
  while(1) {
    errno = 0;
// long __cdecl strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
/*
 *  strtol函数说明
 *  _Radix指定转换进制
 *  会将参数__restrict__ _Str字符串根据参数base来转换成长整型数。参数base范围从2至36，
 *  或0。参数base代表采用的进制方式，如base值为10则采用10进制(字符串以10进制表示)，若
 *  base值为16则采用16进制(字符串以16进制表示)当base值为0时则是采用10进制做转换，但遇到
 *  如''0x''前置字符则会使用16进制做转换。若参数endptr不为NULL，则会将遇到不合条件而终止
 *  的nptr中的字符指针由endptr返回。返回值:返回转换后的长整型数，否则返回ERANGE并将错误
 *  代码存入errno中。
 *
 *  附加说明: ERANGE指定的转换字符串超出合法范围。
 *           若endptr 不为NULL，则会将遇到的不符合条件而终止的字符指针由 endptr 传回；
 *           若 endptr 为 NULL，则表示该参数无效，或不使用该参数。
 *
 *  执行过程：
 *  一开始strtol()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号才开始做
 *  转换，再遇到非数字或字符串结束时('\0')结束转换，并将结果返回。若参数endptr不为NULL，则
 *  会将遇到不合条件而终止的nptr中的字符指针由endptr返回；若参数endptr为NULL，则会不返回非
 *  法字符串。
 * */
    const long i = strtol(start, &end, 10);
    if(start == end) {
      break;
    }
/*
 *  正常情况 %s 将字符串全部打印但该字符串必须以NULL结尾
 *  %.*s可以指定打印字符串的长度 --- (int)(end - start)打印长度，start打印起点
 *  %ld转换后的数值 --- i
 * */
    printf("'%.*s'\t ==> %ld.", (int)(end - start), start, i);
//  处理溢出
//  此例中的200000000000000000000000000000是大于整形最大范围的
    if(errno == ERANGE) {
      perror("");
    }
    putchar('\n');
    start = end;
  }

  return 0;
}

