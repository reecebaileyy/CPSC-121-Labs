#include <iostream>
#include <sstream>

std::string MilitaryToRegularTime(int military_time) {

  int hour = military_time / 100;
  int minute = (military_time - (hour * 100));
  std::string current_hour = std::to_string(hour) + ":";
  std::string current_minute = std::to_string(minute);
    if (minute == 0) {
      current_minute += "0";
    }
    else if (minute < 10) {
      current_minute = "0" + std::to_string(minute);
    }
  std::string regular_format;
  std::string am = " am";
  std::string pm = " pm";

  if (hour > 23 || hour < 0 || minute < 0 || minute > 59){
    regular_format = "Please enter a valid time :D";
  }
  else if (0 <= hour && hour < 12 && 0 <= minute && minute <= 59) {
    regular_format = current_hour + current_minute + am;
  }
  else if (hour == 12) {
      std::string current_hr = std::to_string(hour) + ":";
      regular_format = current_hr + current_minute + pm;
    }
  else if (12 <= hour && hour <= 23 && 0 <= minute && minute <= 59) {
    std::string current_hr = std::to_string(hour - 12) + ":";
    regular_format = current_hr + current_minute + pm;
  }


  return regular_format;
}
