#include <iostream>
using namespace std;

/*Write a C++ program to compute the sum of the two given integer values. 
If the two values are the same, then return triple their sum*/

int main(){
	int num1,num2,sum=0;
	
	cout << "Enter your first number: " <<endl;
	cin >>num1;
	cout << "Enter your second number: " <<endl;
	cin >>num2;
	
	if(num1==num2){
		sum=(num1+num2)*3;
	}
	else{
		sum = num1+num2;
	}
	cout << "Sum of numbers = "<<sum << endl;
}
