#pragma pack(4) // 修改预设对齐数默认值
struct Test {
  int a;
  double b;
  char c;
};
#pragma pack()

void bool_test();
void const_test();
void memory_alignment(); // 内存对齐
