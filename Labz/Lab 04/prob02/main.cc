#include <iostream>
#include "rectangle.h"

int main() {

  int _lengthr1;
  int _widthr1;
  int _lengthr2;
  int _widthr2;
  int _perimeter;
  int _area;
  int _largestlength;
  int _largestwidth;
  int _largestarea;

  // Rectangle 1
  std::cout << "====== Rectangle 1 ======" << std::endl;
  std::cout << "Please enter the length: ";
  std::cin >> _lengthr1;
  std::cout << "Please enter the width: ";
  std::cin >> _widthr1;
  std::cout << "Rectangle 1 created with length " << _lengthr1 << " and width " << _widthr1 << "\n";

  Rectangle r1;
  r1.SetLength(_lengthr1);
  r1.SetWidth(_widthr1);
  r1.Area();

  std::cout << "The area of Rectangle 1 is: " << r1.Area() << "\n";
  std::cout << "The perimeter of Rectangle 1 is: " << r1.Perimeter() << "\n\n";

  // Rectangle 2
  std::cout << "====== Rectangle 2 ======" << std::endl;
  std::cout << "Please enter the length: ";
  std::cin >> _lengthr2;
  std::cout << "Please enter the width: ";
  std::cin >> _widthr2;
  std::cout << "Rectangle 2 created with length " << _lengthr2 << " and width " << _widthr2 << "\n"; 
  
  Rectangle r2;
  r2.SetLength(_lengthr2);
  r2.SetWidth(_widthr2);
  r2.Area();

  std::cout << "The area of Rectangle 2 is: " << r2.Area() << "\n";
  std::cout << "The perimeter of Rectangle 2 is: " << r2.Perimeter() << "\n\n";

  if(r1.Area() > r2.Area()) {
    _largestlength = _lengthr1;
    _largestwidth = _widthr1;
    _largestarea = r1.Area();
  } else {
    _largestlength = _lengthr2;
    _largestwidth = _widthr2;
    _largestarea = r2.Area();
  }

  std::cout << "The largest rectangle has a length of " << _largestlength << ", a width of " << _largestwidth << ", and an area of " << _largestarea << ".\n";


  return 0;
}
