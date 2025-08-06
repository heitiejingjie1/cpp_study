#include "day4.hpp"
#include <cstdio>
#include <iostream>

using namespace std;

void inline_function_test() {}

void const_cast_test() {
  // const_cast 类型转换:用来移除变量的常量性质
  // 一般用于指针或引用
  // 去除const限定不是为了修改它的内容，只是为了函数能接受这个参数
  const int val = 100;

  // int n = const_cast<int>(val);

  int *p_val = const_cast<int *>(&val);
  *p_val = 200;

  cout << val << endl;
  printf("%p\n", &val);
  printf("%p\n", p_val);

  int &refval = const_cast<int &>(val);
  refval = 300;
  cout << refval << endl;
  cout << val << endl;
}

void static_cast_test() {
  // static_cast类型转换:
  // 1、隐式类型转换都可由static_cast转换完成
  // 2、大类型转换为小类型由static_cast来强制转换
  // 3、将void * 指针转换为某一类型的指针
  // 4、将基类指针转换为派生类指针

  double da = 3.14;
  int ia = static_cast<int>(da);
  cout << ia << endl;
}

void reinterpret_cast_test() {
  // reinterpret_cast类型转换: 为操作数的位模式提供较底层的重新解释
  // 将数据以二进制形式存在
  char *str = "this is my test";
  // int i = reinterpret_cast<int>(str);
}
