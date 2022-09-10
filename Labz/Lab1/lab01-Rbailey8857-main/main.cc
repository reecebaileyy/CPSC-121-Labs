#include <iomanip>
#include <iostream>


int main() {
  std::cout << std::fixed;
  std::cout << std::setprecision(2);

  double meal_cost;
  double meal_tip;

  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;
  std::cout << "Please input tip percentage: ";
  std::cin >> meal_tip;

  double _taxes = meal_cost * 0.075;
  double _taxes_meal_cost = _taxes + meal_cost;
  double _tip = ((meal_cost) * (meal_tip * 0.01));
  
  double _total = _tip + _taxes_meal_cost;

  std::cout << "\nRestaurant Bill";
  std::cout << "\n====================";
  std::cout << "\nSubtotal: $" << meal_cost;
  std::cout << "\nTaxes: $" << _taxes;
  std::cout << "\nTip: $" << _tip;
  std::cout << "\n====================";
  std::cout << "\nTotal: $" << _total << "\n";


  return 0;
}