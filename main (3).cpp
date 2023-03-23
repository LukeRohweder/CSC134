// Luke Rohweder
// CSC 134
// 1-28-23
// M2T2

#include <iostream>
using namespace std;

int main() {
  string name;
  int apples;
  double pricePerApple;

  cout << "What is your name?" << endl;
  cin >> name;
  cout << "How many apples do you have for sale?" << endl;
  cin >> apples;
  cout << "What is the price per apple without taxing it?" << endl;
  cin >> pricePerApple;
  cout << "Welcome to " << name;
  cout << "'s apple orchard." << endl;
  cout << "We have " << apples;
  cout << " apples in stock." << endl;
  cout << "Apples are currently $" << pricePerApple << " each." << endl;
  cout << "If you want all of the apples, it will be $" << pricePerApple * apples << "." << endl;


// double total = pricePerApple * apples; doesnt work in this case. I had this right below double pricePerApple, and in the output, it was putting "If you want all of the apples, it will be $nan."
}