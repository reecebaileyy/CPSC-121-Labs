#include "time_converter.h"
#include <iostream>

int main() {
  int military_time;
  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;

  std::string regular_time;
  MilitaryToRegularTime(military_time) = regular_time;

  std::cout << "The equivalent regular time is: " << MilitaryToRegularTime(military_time) << "\n";
  return 0;
}
