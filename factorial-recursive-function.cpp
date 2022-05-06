#include <iostream>
using namespace std;

int factorial(int number){
	if(number==1){
		return 1;
	}
	return number*factorial(number-1);
}

int main(){
	int userNumber;
	
	cout << "Enter a number to calculate it's factorial : ";
	cin >> userNumber;
	if(userNumber>0){
	  cout << " Result : " << factorial(userNumber);
	}else if(userNumber==0){
		cout << "Result : 1 ";
	}else{
		cout << "Number can't be negative";
	}
	
}
