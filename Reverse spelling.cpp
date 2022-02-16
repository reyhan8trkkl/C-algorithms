#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char a[255];
	
   system("cls");
   
   cout << "(Kelime ya da cumle giriniz) \n Enter a word or sentence: "; gets(a); 
   
   cout << "(Kelimenin ya da cumlenin tersten yazimi) \n Reverse spelling of sentence:\n";
   
   for(int i=strlen(a)-1;i>=0;i--) cout << a[i];
   
     cout<< "\n";
     
     
	system("pause");
	return 0;
}
