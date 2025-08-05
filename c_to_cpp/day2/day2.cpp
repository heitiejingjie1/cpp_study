#include "day2.hpp"
#include <iostream>

using namespace std;

int var = 100;
void domain_operator_test() {

  int var = 50;
  cout << var << endl;
  cout << ::var << endl; // 域运算符
}

void new_delete_operator_test() {
  // new 运算符，在堆上分配内存
  // 1:分配内存空间 (operator new)
  // 2:调用构造函数
  int *p = new int;
  cout << *p << endl;
  int *p2 = new int[10]; // 分配40个字节的空间

  // delete 运算符 销毁分配的内存空间
  // 1:调用析构函数
  // 2:释放内存空间 (operator delete)
  delete p;
  delete[] p2;
}

void add(int a, int b) {
  cout << a + b << endl;
  cout << "int function" << endl;
}
void add(double a, double b) {
  cout << a + b << endl;
  cout << "double function" << endl;
}

// extern "C" 表示不进行名字改编，支持c风格函数,为了进行c风格与cpp风格联合编程
extern "C" {
void add(int a) { cout << "c add function" << endl; }

void add2(double a) { cout << "c add function" << endl; }
}

void overload() {
  // 函数重载
  // 静态多态:静态联编
  add(3, 4);
  add(3.14, 3.14);
  add(2);
  add2(3.14);
}

// 为了支持函数重载
void name_managling() {}
