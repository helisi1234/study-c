//
// Created by helisi on 2021/8/3.
//
#include <stdio.h>
//浮点数有有效范围,不能使用浮点数进行钱的计算
int main() {
  //定义float必须加f,否则会认为是double类型
  float a_float = 3.14f;  //至少能表示6位数字
  printf("size of float: %d\n", sizeof(float));
  double a_double = 3.14;
  printf("size of double: %d\n", sizeof(double));

  /*
   * 浮点数使用科学计数法表示
   * 12345 => 1.2345 * 10^4  (1.2345e4)
   * 以float(32位)为例
   * 符号 尾数             指数
   * 1    23              8
   * +/- 小数部分,决定精度  -127~128决定范围
   * */

  //经纬度
  float lat = 39.90815f;
  printf("%f", 39.908156f - lat);
  return 0;
}

