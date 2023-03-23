#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter a number from 1 to 12? ";
   cin >> num;

   int count = 1;
   while (count <= 12) {
      cout << num << " times " << count << " is " << (num * count) << "." << endl;
      count++;
   }

   return 0;
}