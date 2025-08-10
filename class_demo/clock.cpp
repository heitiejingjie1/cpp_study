#include "clock.hpp"
#include <iostream>

using namespace std;

void Clock::display() {
  cout << hour_ << ":" << minute_ << ":" << second_ << endl;
}

void Clock::init(int hour, int minute, int second) {
  hour_ = hour;
  minute_ = minute;
  second_ = second;
}

void Clock::update() {
  second_++;
  if (second_ == 60) {
    minute_++;
    second_ = 0;
  }

  if (minute_ == 60) {
    hour_++;
    minute_ = 0;
  }

  if (hour_ == 24) {
    hour_ = 0;
    minute_ = 0;
    second_ = 0;
  }
}

int Clock::get_hour() { return hour_; }

int Clock::get_minute() { return minute_; }

int Clock::get_second() { return second_; }

void Clock::set_hour(int hour) { hour_ = hour; }

void Clock::set_minute(int minute) { minute_ = minute; }

void Clock::set_second(int second) { second_ = second; }
