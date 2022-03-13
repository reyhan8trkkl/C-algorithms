#include <iostream>
using namespace std;
#include <string>
/* Write a C++ program to exchange the first and last characters 
 in a given string and return the new string.*/

string exchange(string str) {
            
	return str.length() > 1
     ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) : str;
        }
        
int main() 
 {
   string word;
   	
  cout << "Enter a word: " << endl;  
  cin >> word; cout << endl;
  cout <<  exchange(word);

  return 0;    
}
