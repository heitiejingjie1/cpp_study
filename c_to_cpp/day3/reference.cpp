#include "reference.hpp"
#include <iostream>

using namespace std;

void reference_test() {
  // 引用只是给一个变量起别名,没有自己独立的空间,与所引用的变量共享空间，对引用的改变会传递到所引用的变量
  // 引用必须初始化，一经初始化，不能再指向其他变量
  int a(100);
  int b(300);

  int &ra = a; // 定义引用
  ra = 200;
  cout << a << endl;

  ra = b; // 只是将b的值赋值给ra，并没有指向b
  b = 400;
  cout << a << endl;
}

void const_reference_test() {
  // const引用是指向const对象的引用

  const int val = 100;
  const int &r_val = val;
  cout << r_val << endl;

  int val2 = 200;
  // int &r_val2 = val;    // 普通引用不能引用const对象
  const int &r_val3 = val2; // const引用可以指向普通对象
  cout << r_val3 << endl;
  val2 = 300;
  cout << r_val3 << endl;
}

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void reference_args_test() {
  int x(5);
  int y(6);
  cout << "改变前:\n";
  cout << "x = " << x << " y = " << y << endl;
  swap(x, y);
  cout << "改变后:\n";
  cout << "x = " << x << " y = " << y << endl;
}

int arr[] = {1, 2, 3, 4, 5};
int &returns_test(int i) { return arr[i]; }

int &add(int x, int y) {
  int sum(0);

  sum = x + y;

  return sum;
}
void reference_returns_test() {
  returns_test(3) = 300;
  cout << "arr[3] = " << arr[3] << endl;

  // 不能返回局部变量的引用，会产生不可预估的错误
  int an = add(3, 4);
  // int &an2 = add(5, 6);

  cout << "an = " << an << endl;
  // cout << "an2 = " << an2 << endl;
}
