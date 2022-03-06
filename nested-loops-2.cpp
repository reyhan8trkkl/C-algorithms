#include <iostream>

int main () {
using namespace std;

int sum = 0,c, number,many;

cout << "How many numbers do you want? " <<endl;
cin >> many;

if(many>0){
	
for (c = 0; c < many; c++) {
cout << "Enter the number" << endl;
cin >> number;
sum = sum + number;
}
cout << "Sum is " << sum << endl;}
else{
	cout << "Enter a positive number";
}
return 0;
}
