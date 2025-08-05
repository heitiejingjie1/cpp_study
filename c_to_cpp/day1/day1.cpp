#include "day1.hpp"
#include <cstdio>
#include <iostream>
using namespace std;

void bool_test() {
  bool result;
  // result = true;
  result = 100;

  cout << result << endl;
}

void const_test() {
  // const double PI;
  const double PI = 3.14159;

  // PI = 3.14;

  // 常量指针
  double b = 3.14;
  const double *p_PI = &PI; // p_PI 是常量，指向的也是一个常量
  // *p_PI = 3.14;
  // *p_PI = &b;

  // 指针常量
  int a = 100;
  int *const p_a = &a; // p_a 为一个常量,但指向的是一个变量
  *p_a = 200;

  cout << PI << endl;
  cout << *p_a << endl;
}

void memory_alignment() {
  cout << "内存为: " << sizeof(Test) << endl;

  // 结构对齐规则为:
  // 第一个变量的地址与结构的地址的偏移量为0
  // 其他变量要对齐到某个数字(对齐数)的整数倍
  // 对齐数计算为:取编译器对齐整数与该成员大小的较小值
  // 结构体大小为最大对齐数的整数倍
  Test test;
  char *p_struct = (char *)&test;
  int *p_a = &test.a;

  printf("%p\n", p_struct);
  printf("%p\n", p_a);
}
