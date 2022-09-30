#include "cup.h"
#include <iostream>

//========================== YOUR CODE HERE ==========================
// TODO: Implement the member functions for the Cup class in this
// file.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Cup class.
//====================================================================

Cup::Cup() 
    : drink_type_("Water"), fluid_oz_(16.0) {}

Cup::Cup(std::string drink_type, double oz){
  drink_type_ = drink_type;
  fluid_oz_ = oz;
}

  void Cup::Drink(double sip) {
    if (sip >= fluid_oz_) {
      fluid_oz_ = 0;
    } else {
      fluid_oz_ = fluid_oz_ - sip; //is this correct?
    }
  }

  void Cup::Refill(double replenish) {
      fluid_oz_ += replenish;
    }

  void Cup::NewDrink(std::string drink_type, double fluid_oz) {
    drink_type_ = drink_type;
    fluid_oz_ = fluid_oz;
  }

  void Cup::Empty() {
    fluid_oz_ = 0;
    drink_type_ = "nothing";
  }

  std::string Cup::GetDrinkType() {
    return drink_type_;
  }

  double Cup::GetFluidOz() {
    return fluid_oz_;
  }

