// Luke Rohweder
// M3LAB2
// 2-15-2023
// CSC 134

#include <iostream>
using namespace std;


void choose_door1();
void choose_door2();

int main() {

  int x = (6 + 8) / 4 * 2;
  cout << x;
  return 0;
  
  int choice; 


  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  
  cout << "DEBUG: picked " << choice << endl;
  if (choice == 1) {
      choose_door1();
  }
  else if (choice == 2) {
      choose_door2();
  }
  else {
    cout << "You didn't pick any door at all!" << endl;
  }
  cout << "Thank you for playing!" << endl;
  
  return 0; 

} 

void choose_door1() {
  cout << "You picked Door Number One!" << endl;
  cout << "You won -- A NEW CAR!" << endl;
  cout << "but..." << endl;
  cout << "You have to pick the right key!" << endl;
  cout << "Will you pick the red key or the blue key? ";
  string key;
  string winner = "red";
  cin >> key;
  if (key == winner) {
    cout << "Yes! The car starts!" << endl;
  }
  else {
    cout << "You can have the car if you can carry it home!" << endl;
  }
  
  
  return;
}

void choose_door2() {
  cout << "You picked Door Number Two!" << endl;
  cout << "Congrats, you won $3.50!" << endl;
}