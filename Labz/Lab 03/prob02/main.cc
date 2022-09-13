#include <iomanip>
#include <iostream>
#include "salary.h"

int main() {
  double given_wage;
  double given_hours;  

  std::cout << "Hourly wage: ";
  std::cin >> given_wage;
  std::cout << "Hours worked: ";
  std::cin >> given_hours;
  std::cout << "Total Salary Owed: ";
  
  if (given_wage < 0 || given_hours < 0) {
    std::cout << "Invalid input";
    }
  else {
    double total_salary_owed = SalaryCalculator(given_wage, given_hours);
    std::cout << std::fixed << std::setprecision(2) << total_salary_owed << "\n";
  }

  return 0;
}
