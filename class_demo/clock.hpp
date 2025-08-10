#ifndef _CLOCK_H_
#define _CLOCK_H_

class Clock {
private:
  int hour_;
  int minute_;
  int second_;

public:
  void display();
  void init(int hour, int minute, int second);
  void update();

  int get_hour();
  int get_minute();
  int get_second();

  void set_hour(int hour);
  void set_minute(int minute);
  void set_second(int second);
};

#endif // _CLOCK_H_
