// Bryant Huynh
// CPSC 121L-02
// 2023-09-05
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 01-00
//
//
// I made a code where it calcualtes the restaurant bill including tax and tip by just adding the total price of food ordered. 
//

#include <iomanip>
#include <iostream>

int main() {
double meal_cost = 0;
double tip_percentage = 0;
double tax = 0;
 
std::cout << std::setprecision(2) << std::fixed; 

std::cout << "Please input meal cost: ";
std::cin >> meal_cost; 
std::cout << "Please input tip percentage: ";
std::cin >> tip_percentage; 

double taxed = meal_cost * .075;
double tipped = meal_cost * (tip_percentage / 100);
std::cout << "\nRestaurant Bill\n";
std::cout << "====================\n";
std::cout << "Subtotal: $" << meal_cost << "\n";
std::cout << "Taxes: $" << taxed << "\n";
std::cout << "Tip: $" << tipped << "\n";
std::cout << "====================\n";
std::cout << "Total: $" << meal_cost + taxed + tipped << "\n";

  return 0;
}
