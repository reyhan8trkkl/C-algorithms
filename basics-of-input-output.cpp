#include <iostream>
using namespace std;
int main() {
	int number;
	string string;
	
	cout << "Enter a number : "; 
	cin >> number; 
	cout << "Enter a word : ";
	cin >> string;      
	
	int wordLength = string.length();
	
	if(0<=number && number<=10){
      cout << number*2 << endl;
	}
	
	if(1<= wordLength && wordLength <=15){
      cout << string << endl;
	}
	
}

