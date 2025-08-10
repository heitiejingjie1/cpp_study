#include <iostream>

using namespace std;

void display();

int main(int argc, char *argv[]) {
  display();
  return 0;
}

void display() {
  // 指针数组
  int *p_array[4];
  int *pi;

  int len = sizeof(p_array);

  cout << "len = " << len << "pi len = " << sizeof(pi) << endl;

  // 数组指针
  // 指向数组首地址的指针
  int a[3] = {1, 2, 3};
  int (*pa)[3] = &a;
  cout << "pa len = " << sizeof(pa) << endl;
}
