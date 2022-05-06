#include <iostream>
using namespace std;

int exponent(int baseN, int exponentN){

	if(exponentN>0){
		if(exponentN==1){
			return baseN;
		}
	  return baseN*exponent(baseN,exponentN-1);
	}else{
	   	if(exponentN==-1){
			return baseN;
		}
	  return baseN*exponent(baseN,exponentN+1);
    }
}

int main(){
	int baseNumber,exponentNumber;
	
	cout << "Enter a  base number : ";
	cin >> baseNumber; cout << endl;
	cout << "Enter a  exponent number : ";
	cin >> exponentNumber;
	
	 if(exponentNumber==0){
		cout << "Result : 1 ";
	}else if(exponentNumber<0){
		 cout << " Result : 1/" << exponent(baseNumber,exponentNumber);
	}
	else{
		 cout << " Result : " << exponent(baseNumber,exponentNumber);
	}
	
}
