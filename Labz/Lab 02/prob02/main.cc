#include <iostream>

void CreditCardReccomendation(const int credit_score) {
  if (credit_score < 0) {
    std::cout << "That is an invalid credit score. Please run the program again and provide a valid credit score.";
  }

  else if (credit_score >= 0 && credit_score < 580) {
    std::cout << "Unfortunately, you are ineligible for Tuffy credit cards at the moment. Please try again at a later date.\nThank you for using our program, please come again!";
  }

  else if (credit_score > 579 && credit_score < 670) { 
    std::cout << "You are eligible for the Silver Tuffy Card.\nThank you for using our program, please come again!";
  } else if (credit_score > 669 && credit_score < 800) {
    std::cout << "You are eligible for the Gold Tuffy Card.\nThank you for using our program, please come again!";
  } else if (credit_score > 799 && credit_score < 851) {
    std::cout << "You are eligible for the Platinum Tuffy Card.\nThank you for using our program, please come again!";
  } else if (credit_score > 850) {
    std::cout << "That is an invalid credit score. Please run the program again and provide a valid credit score.";
  } else {
    std::cout << "That is an invalid credit score. Please run the program again and provide a valid credit score.";
  }
}

int main() {
  int given_credit_score;

  std::cout << "Thank you for applying for the Tuffy Credit card. Please enter your credit score.";
  std::cout << "\nCredit Score: ";
  std::cin >> given_credit_score;
  std::cout << "\n";

  CreditCardReccomendation(given_credit_score);
  return 0;
}
