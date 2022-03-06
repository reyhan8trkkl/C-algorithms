#include <iostream>
int main () {
using namespace std;
int choose = 1;
while (choose == 1) {
int b;
cout << "Enter a number to verify odd or even" << endl;
cin >> b;
if (b%2 == 0) {
cout << " Number is even" << endl;
}
else {
cout << " Number is odd" << endl;
}
cout << "To check for more: 1 for yes and 0 for no" << endl;
cin >> choose;
}
cout << "All numbers are verified" << endl;
return 0;
}
