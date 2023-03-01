//Luke Rohweder
//CSC 134
//2-27-2023
//M4T2
#include <iostream>

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
    cout << "Using while to add numbers" << endl;

}


void option_three(){
    cout << "This is still in development...sorry" << endl;
}


int main()
{
    cout << "Welcome to the Menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to sum up numbers" << endl;
    cout << "Press 3 to TODO" << endl;
    cout << "Choice: ";
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 3){
        cout << "Please choose 1, 2, or 3: ";
        cin >> choice;
    }
    if (choice == 1){
        option_one();
    }




    cout << "Thanks for using the Menu" << endl;

    return 0;

}
