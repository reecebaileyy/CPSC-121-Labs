#include <iostream>


void PassengerHeight(double GivenHeight, double SafeHeight) {
  if (GivenHeight < SafeHeight) {
    std::cout << "Safety is our first priority. Unfortunately, we can't let you ride yet.";
  }
  else {
    std::cout << "Congratulations! You are tall enough to ride!";
  }
}

int main() {
  double height;

  std::cout << "You must be at least 55 inches to safely ride the TuffyTwister.\n";
  std::cout << "Please enter your height in inches: ";
  std::cin >> height;

  PassengerHeight(height, 55);

  return 0;
}
