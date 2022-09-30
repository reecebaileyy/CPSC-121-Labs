#include <iostream>
//====================== YOUR CODE HERE ======================
// TODO: Declare the Cup class in this file, with the member
// variables and member functions as described in the README.
//============================================================
class Cup {
  public:
    //================== YOUR CODE HERE ==================
    // TODO: Add the member function declarations here.
    //====================================================
  Cup();
  Cup(std::string drink_type, double oz);
  void Drink(double sip);
  void Refill(double replenish);
  void NewDrink(std::string drinktype_, double fluidoz_);
  void Empty();
  std::string GetDrinkType();
  double GetFluidOz();

 private:
    //================== YOUR CODE HERE ==================
    // TODO: Add the member variable declarations here.
    //====================================================
  std::string drink_type_;
  double fluid_oz_;
  
};
