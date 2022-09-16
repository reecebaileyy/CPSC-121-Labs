#include "rectangle.h"

int Rectangle::Area() {
  return length_ * width_;
}

int Rectangle::Perimeter() {
  return 2 * (length_ + width_);
}

Rectangle LargestRectangleByArea(Rectangle &r1, Rectangle &r2) {
  if (r1.Area() > r2.Area()) {
    return r1;
  } else {
    return r2;
  }
}

