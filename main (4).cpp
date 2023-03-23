//Luke Rohweder
//CSC 134
//2-1-2023
//M2HW1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  string name;
  int accountNumber = 5467;
  double accountBalance = 1000;
  double deposit, withdrawal;
  cout << setprecision(2) << fixed << showpoint;
  cout << "What is your name? " << endl;
  cin >> name;
  cout << "Your account balance is: $" << accountBalance << endl;
  cout << "Would you like to deposit anything? " << endl;
  cin >> deposit;
  cout << "Would you like to withdraw anything? " << endl;
  cin >> withdrawal;
  cout << "Name on account: " << name << endl;
  cout << "Your account number is: " << accountNumber << endl;
  cout << "Your new balance is: $" << accountBalance + deposit << endl;

  cout << "-----------------------------------------------------" << endl;
  
  double width, height, length, volume, cost, charge, profit;
  const double costPerCubicFoot = 0.23;
  const double chargePerCubicFoot = 0.50;

  cout << "Enter the dimensions of your crate below" << endl;
  cout << "What is the width (in feet) of your item?" << endl;
  cin >> width;
  cout << "What is the height (in feet) of your item?" << endl;
  cin >> height;
  cout << "What is the length (in feet) of your item?" << endl;
  cin >> length;
  volume = length * width * height;
  cout << "-------------------------------------------------" << endl;
  cout << "The volume of your cube is " << volume << " cubic feet." << endl;
  cout << "It will cost us $" << costPerCubicFoot * volume << " to build the crate." <<  endl;
  cost = costPerCubicFoot * volume;
  cout << "We will be charging $" << chargePerCubicFoot * volume << " for the crate." << endl;
  charge = chargePerCubicFoot * volume;
  cout << "Profit made is $" << charge - cost << " for the crate." << endl;
  
  cout << "---------------------------------------------------" << endl;
  
  int pizza, slices, people;
  
  cout << "How many pizzas did you order?" << endl;
  cin >> pizza;
  cout << "How many slices of pizza are in the whole pizza? " << endl;
  cin >> slices;
  int totalSlices = slices * pizza;
  cout << "How many people are eating pizza tonight? " << endl;
  cin >> people;
  int slicesTaken = people * 3;
  int slicesLeft = totalSlices - slicesTaken;
  cout << "There are " << slicesLeft << " slices of pizza remaining!" << endl;

  cout << "---------------------------------------------------" << endl;
  
  string school, team;
  
  school = "FTCC";
  cout << "Let's go " << school << endl;
  cout << "Let's go " << school << endl;
  cout << "Let's go " << school << endl;
  team = "Trojans";
  cout << "Let's go " << team << endl;
  
  
  
}