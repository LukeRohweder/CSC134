// Luke Rohweder
// CSC 134
// 2-15-2023
// M3LAB3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int die1, die2, roll;
  int seed;
  bool winner = false;
  cout << "Welcome to the craps table!" << endl;
  cout << "What's your lucky number? " << endl;
  cin >> seed;
  srand(seed);
  
  cout << "Let's roll! " << endl;
  die1 = (rand() % 6) + 1;
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;
  roll = seed;

  cout << "You rolled: (" << die1 << "+" << die2 << ")" << endl;
  cout << roll << endl;

  switch (roll) {
    case 2:
      cout << "Snake Eyes!" << endl;
        winner = false;
      break;
    case 12:
      cout << "Boxcars!" << endl;
        winner = false;
      break;
    case 7:
      cout << "You win!" << endl;
        winner = true;
      break;


    default:
      cout << "Unknown -TODO" << endl;
  }
  if (winner) {
    cout << "You won" << endl;
  }
  else {
    cout << "Sorry -- you didn't win" << endl;
  }
  
  cout << "Thanks for playing!" << endl;
}