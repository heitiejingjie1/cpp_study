#include "object_use.h"
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display() {
  iostream_use();
  vector_test();
}

void iostream_use() {
  // 格式转换
  cout << "一个十进制数: " << dec << 15 << endl;
  cout << "八进制表示: " << oct << 15 << endl;
  cout << "十六进制表示: " << hex << 15 << endl;
  bitset<32> bit(15);
  cout << "二进制表示: " << bit << endl;

  // 字符数组拼接
  cout << "  \t登高\n"
          "  \t杜甫\n"
          "风急天高猿啸哀，渚清沙白鸟飞回\n"
          "无边落木萧萧下，不尽长江滚滚来\n"
          "万里悲秋常作客，百年多病独登台\n"
          "艰难苦恨繁霜鬓，潦倒新停浊酒杯。\n"
       << endl;

  // 读取数据
  int number;
  cout << "Please enter one number: ";
  cin >> number;
  cout << "数字八进制表示为: 0" << oct << number << endl;
  cout << "数字十六进制表示为: 0x" << hex << number << endl;

  // 调用其他程序
  system("hello"); // 调用系统程序

  // string 简介
  string s1, s2;
  string s3 = "hello world";
  string s4("I am");
  s2 = "today";

  s1 = s3 + " " + s4;
  s1 += " 8 ";
  cout << s1 + s2 << "!" << endl;

  // 读入写入文件
  ifstream in("test.txt");   // 读入的文件
  ofstream out("test2.txt"); // 写入的文件

  string s;
  while (getline(in, s)) { // 获取一行
    out << s << "\n";      // 将读取的一行写入文件
  }
  cout << "Done" << endl;

  // 将整个文件拷贝为一个string对象
  ifstream in_str("test.txt");

  string str, line;

  while (getline(in, line)) {
    str += line + "\n";
  }
  cout << str << endl;
}

void vector_test() {
  vector<string> v;
  ifstream in("test.txt");
  string line;

  while (getline(in, line)) {
    v.push_back(line);
  }

  for (int i = 0; i < v.size(); ++i) {
    cout << i << ":" << v[i] << endl;
  }
}
