#include <stdio.h>

int main() {
  /*
   * struct <结构体名> {
   *   <成员类型> <成员名>;
   *   ...
   * } <结构体变量>;
   * */

//  定义结构体变量
/*
 *  结构体也是内存中的一片空间
 *  结构体在内存中占用的地址头（Person）就是结构体中第一个变量的地址（name）
 * */
  struct Person {
    char *name;
    int age;
    char *id;
  };
//  不赋值初始化的时候所有的值都是默认值，由编译器决定
  struct Person person = {};
//  全赋值初始化
  struct Person person1 = {"helisi", 22, "173080092"};
//  对结构体指定变量初始化
  struct Person person2 = {.name = "helisi", .id = "173080092"};
//  对结构体指定变量赋值
  person2.age = 22;

  printf("%d\n", sizeof(person));
  printf("%d\n", sizeof(typeof(struct Person)));

//  定义结构体指针
  struct Person *person3 = &person2;

//  访问变量
  printf(person2.name);  //变量访问
  printf(person3->name);  //变量指针访问

  /*
   *  定义结构体变量并命名
   * */
  typedef struct Person_1 {
    char *name;
    int age;
    char *id;
  } Person_1;

//  创建并初始化，其余操作相同
  Person_1 person_1 = {"helisi", 22, "173080092"};

  /*
   *  结构体嵌套
   * */
  typedef struct Company {
    char *name;
    char *id;
    char *company_location;
  } Company;

  typedef struct Employee{
    char *name;
    int age;
    char *id;
    struct Company *company;
    struct Company company2;
    struct {
      int extra;
      char *extra_s;
    } extra_value;
  } Employee;

  Company company = {"abc", 1, "xx-xx-xx-xx"};
  Employee employee = {"helisi", 22, "173080092", .company = &company,
                       .company2 = {
      "def", 2, "yy-yy-yy-yy"
  }};

//  访问嵌套结构体变量
  puts(employee.company->name);
  puts(employee.extra_value.extra);

  return 0;
}