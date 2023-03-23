// Luke Rohweder
// CSC 134
// 1-20-23
// M1LAB1

#include <iostream>
using namespace std;

int main() {
  string name = "Luke";
  int apples = 100;
  double pricePerApple = 0.25;
  double totalPrice = pricePerApple * apples;
  
  cout << "Welcome to " << name;
  cout << "'s apple orchard." << endl;
  cout << "We have " << apples;
  cout << "apples in stock" << endl;
  cout << "Apples are currently $" << pricePerApple << " each" << endl;
  cout << "If you want all of the apples, it will be $" << totalPrice << endl;
  
}