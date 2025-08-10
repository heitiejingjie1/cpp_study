#include "clock.hpp"

void class_demo();

int main(int argc, char *argv[]) {
  class_demo();
  return 0;
}

void class_demo() {
  Clock c;

  c.init(6, 45, 36);
  c.display();

  c.init(23, 59, 58);
  c.update();
  c.display();

  c.update();
  c.display();

  c.update();
  c.display();

  c.update();
  c.display();
}
