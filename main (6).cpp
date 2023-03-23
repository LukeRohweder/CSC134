#include <iostream>
#include <cstdlib>  // Enables rand(), srand()
#include <ctime>    // Enables use of time() function
#include <fstream>  // file streams
using namespace std;

// constants
const int NUM_STATS = 6;  // STR, DEX, INT, WIS, CON, CHA
// This is used to avoid "magic numbers" (I might add more stats later)

// Utility function
// TODO: move save_stats to its own function

// menu functions
void option_one() {
    // count from 0 to 9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10) {
        cout << num << " ";
        num++;
    }
    cout << endl;

    cout << "Using for() to count" << endl;
    for (int i=0; i<10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void option_two() {
    // dice roller
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed = time(0);
    srand(seed);
    // roll the dice
    d6_1 = (rand() % 6) + 1; // 0-5, then add one
    d6_2 = (rand() % 6) + 1;
    d6_3 = (rand() % 6) + 1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}


void option_three() {
    // sum and average of dice
    //  roll 3d6, six times
    //  find the sum and average
    //  reroll if it's not high enough (average <9)
    // For M5, we're storing these stats in an array
    int stats[NUM_STATS];           // STR, DEX, INT, WIS, CON, CHA
    int total = 0;          // the total of all stats
    int d6_1, d6_2, d6_3;   // 3 dice (6 sided)
    int roll;               // 3d6 (one stat roll)
    int seed = time(0);
    srand(seed);
    for (int i=0; i < NUM_STATS; i++) {
        // roll dice
        d6_1 = (rand() % 6) + 1; // 0-5, then add one
        d6_2 = (rand() % 6) + 1;
        d6_3 = (rand() % 6) + 1;
        roll = d6_1 + d6_2 + d6_3;
        // store the roll in the correct spot in the array
        stats[i] = roll;
        // show individual rolls
        // print result
        cout << "Roll #" << i << ": ";
        cout << d6_1 << " + " << d6_2 << " + " << d6_3;
        cout << " = " << roll << endl;
    }
    // now step back through the array
    // print them, and count the total
    // this is a "range based" for loop
    // stat is an integer, stats is an array of integers
    for (int stat : stats) {
        // print result
        cout << "STAT"": ";
        cout << " = " << stat << endl;
        // add to the total
        total += stat;
    }
 // print the total
    cout << "total of all stats: " << total << endl;
    int average = total / 6; // note: we're dropping the decimal
    cout << "average roll = " << average << endl;
    if (average <= 9) {
        cout << "Low stats, you can reroll." << endl;
    } else {
        cout << "A playable character! good luck." << endl;
        cout << "Do you want to save this character to file? (y/n)";
        //save_character(stats); TODO
        char answer;
        cin >> answer;
        if (answer == 'y') {
          // we're going to try to save the character to file
          // TODO: make sure we write to the file, not the console
          // character is in the array stats
          ofstream output_file; 
          string filename = "char.txt"; // the filename

          // open the file to write 
          output_file.open(filename);
          // write each line one at a time
          for (int i=0; i < NUM_STATS; i++) {
            output_file << stats[i] << endl;
          }
          // close the file
          output_file.close();
        }
    }
}

void option_four() {
  // load a character from file
  ifstream input_file;
  string filename = "char.txt";
  int stat;  // the current stat we're reading 
  cout << "Reading file " << filename << endl;

  // open the file
  input_file.open(filename);
  while (input_file >> stat) {
    cout << stat << endl;
  }
  input_file.close();
    cout << "Finished reading file." << endl;
}

// main menu
int main()
{
    // display a menu.
    // have the user choose 1, 2, 3, or 4.
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; 
    cout << "Press 4 to load a character" << endl;
    cout << "Press 0 to quit" << endl;
    cout << "Choice: ";
    // input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, 3, or 4
    while (choice > 0 && choice < 4) {
        cout << "Please choose 0, 1, 2, 3, or 4: ";
        cin >> choice;
    
        // if we get here, we know choice is valid
        if (choice == 1) {
            option_one(); // function call to count
        }
        if (choice == 2) {
            option_two(); // the dice roller
        }
        if (choice ==3) {
            option_three();
        }
        if (choice ==4) {
            option_four();
        }
        if (choice == 0) {
          cout << "Goodbye" << endl;
        }
    }

    cout << "Thanks for using the menu." << endl;
    return 0;
}