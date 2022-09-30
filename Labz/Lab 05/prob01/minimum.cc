#include "minimum.h"

int IndexOfMinimumElement(std::vector<double> input) {
  if (input.size() > 0) {
    int smallestNumber = 0;
    for (int i = 1; i < input.size(); i++) {
      if (input[i] < input.at(smallestNumber)) {
        smallestNumber = i;
      }
    }
    return smallestNumber;
  } else {
    return -1;
  }
}
