#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib> //use of rand
using namespace std;

int main(void)
{
	
	int x,guessnumber;
    srand(time(0));
    
    x = rand()%100+1;
    cout << x <<endl;
    cout << "Guess the number" <<endl;
    cin >> guessnumber;
   
    if(guessnumber==x){
    	cout << "You found it !" <<endl;
	}

	else if(x-10<guessnumber && guessnumber<x+10){
		
		cout << "That was less !" <<endl;
	
	}
	else{
		cout << "Nah that was too much !" <<endl;
	}
	
    return 0;
}
