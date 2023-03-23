// Luke Rohweder
// CSC 134
// 2-17-2023
// M3HW1 - Gold

#include <iostream>
#include <cstdlib>
using namespace std;

void answer_one();
void answer_two();

int main() {
  string answer;
  cout << "Question 1" << endl;
  cout << "Hello, I'm a C++ program!" << endl;
  cout << "Do you like me? Please answer yes or no" << endl;
  cin >> answer;
  if (answer == "yes"){
     cout << "That's great! I'm sure we'll get along." << endl;
     }
  else if (answer == "no"){
      cout << "Well, maybe you'll learn to like me later." << endl;
      }
  else {
      cout << "If you're not sure...that's OK." << endl;
    }
  cout << "Question 2" << endl;
  cout << "Enter the price of your meal: " << endl;
  double meal;
  cin >> meal;
  cout << "Is this dine in or take out? Enter 1 for dine in, or 2 for takeout: " << endl;
  string answerMeal;
  double tip = .15 * meal;
  double tax = .08 * meal;
  double totalTip = meal + tip + tax;
  double totalNoTip = meal + tax;
  cin >> answerMeal;
    if (answerMeal == "1"){
      cout << "Your total is: "<< totalTip << endl;
    }
    else {
      cout << "Your total is: " << totalNoTip << endl;
    }
  
  cout << "Question 3" << endl;
  int choice;
  cout << "You see a person in an alleyway coming towards you with a gun. You look to your right and see a knife. You look to your left and you see a pistol. Which one do you take?" << endl;
  cout << "1 for knife, 2 for gun." << endl;
  cin >> choice;
  cout << "You picked: " << choice << endl;
    if (choice == 1){
      answer_one();
    }
    else if (choice == 2){
      answer_two();
    }
    else {
      cout << "You didn't pick a number at all..." << endl;
    }
      cout << "Bye!" << endl;

  
    cout << "Question 4" << endl;
    int mathAnswer;
    int numDigits = 10;
    srand( time(NULL) );
  	int numOne = rand() % numDigits;
  	int numTwo = rand() % numDigits;
    int correct = numOne + numTwo;
  	cout << numOne << " + " << numTwo << " = ";
    cin >> mathAnswer;{
      if (mathAnswer == correct)
        cout << "Good job, you got it correct!";
    }
      if (mathAnswer != correct){
        cout << "Sorry, that's incorrect";
    }
  
      return 0;
  }


  

void answer_one() {
  cout << "You decided to bring a knife to a gun fight...really? You take the knife, and look your enemy in the eyes. You start to run towards him, you see him lift his gun up and aim at you. Do you dash to the right or to left? (type 1 for right or 2 for left)" << endl;
  string choice;
  string winner = "2";
  cin >> choice;
    if (choice == "2") {
      cout << "You died, he shot you." << endl;
    }
    else{
      cout << "You dodged the bullets that he shot at you, and you stab him in the chest, effectively taking him down, good job, you won!" << endl;
    }
  }

  
void answer_two() {
  cout << "You decided to pick up the gun, it's a duel...You take aim at the person. Where do you aim? Chest or legs?" << endl;
  
  cout << "Type 1 for chest or 2 for legs: " << endl;
    string choice2;
    string winner2 = "1";
    cin >> choice2;
      if (choice2 == "1"){
        cout << "You decided to aim at his chest. You take aim and fire! You knocked the bad guy out! Good job, you win." << endl;
      }
      else {
        cout << "You take the gun and aim at his legs, you miss every bullet, and he hits all of his shots on you. You lose!" << endl;
      }
  }