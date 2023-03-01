//Luke Rohweder
//CSC 134
//2-27-2023
//M4T2
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void option_one(){
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10){
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

void option_two(){
    //dice roller
    int first, second, third; // 3 dice
    int total;
    int seed;
}


void option_three(){
    //sum and average of dice
}


//There is no option 4 function, It's just quit.

int main()
{
    cout << "Welcome to the Menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl;
    cout << "Choice: ";
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4){
        cout << "Please choose 1, 2, 3, or 4: ";
        cin >> choice;
    }
    if (choice == 1){
        option_one();
    }




    cout << "Thanks for using the Menu" << endl;

    return 0;

}
