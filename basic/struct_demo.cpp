#include <iostream>

// 定义结构体
struct Student {
  int Code;
  char Name[20];
  char Sex;
  int Age;
};

void Demo() {
  Student stu;
  Student stu_arr[10]; // 10个学生
  Student *p_stu;

  // 动态创建结构体变量
  Student *new_stu = new Student();

  new_stu->Age = 29;
  new_stu->Sex = 'M';

  delete new_stu;
}
