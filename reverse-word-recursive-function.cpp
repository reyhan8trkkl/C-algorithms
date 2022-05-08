#include <iostream>
using namespace std;

void reverse(string word,int length){ 
       if(length==0){
       	  return;
	   }
	    cout << word[length-1];
	    reverse(word,length-1);
}
int main(){
	string userWord;
	
	cout << "Enter a word to reverse : ";
	
	cin >> userWord;
	
	int length = userWord.length();
	
	reverse(userWord,length);
	 return 0;
}
