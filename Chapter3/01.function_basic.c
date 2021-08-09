#include <stdio.h>

//此处x是形式参数
double F(double x) {
  return x * x + x + 1;
}

double G(double x, double y, double z) {
  return x * x + y * y + z * z;
}

int main(void) {
  /*
   *  <return type> <name> (<parameters>) {
   *    ...statement
   *    return <return value>;
   *  }
   * */
  //此处的2是实际参数
  double double_f = F(2.0);
  double double_g = G(2.0, 3.0, 4.0);
  printf("result of F: %f\n", double_f);
  printf("result of G: %f\n", double_g);
//  函数必须定义在函数调用之前
//  h();
  return 0;
}

//void h(){}