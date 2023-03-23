#include <iostream>
using namespace std;

int main() {
   int count = 1;

   while (count <= 12) {
      cout << "5 times " << count << " is " << (5 * count) << "." << endl;
      count++;
   }

   return 0;
}