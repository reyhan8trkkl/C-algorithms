#include <iostream>
#include <stack>
using namespace std;
//stack elemanlarini göster
void display() { 

int i,top,stack[6];
	//stack bos mu kontrol et
	if(top==-1) { 
		cout << "stack bos\n"; 
	}
	//elemanlar var
	else {
		cout << "Stack icindeki elemanlar : "; 
		for(i=top; i>=0; i--) { 
			cout << "\t%d", stack[i]; 
		}	 
	cout << "\n"; 
	} 
}
int main(void)
{ 
stack<int> s;
  int choice; 
  int data,top; 
  char ch; 
  top=-1; 
  cout << "Dizi kullnarak stack ornnegi: \n"; 
  display();
  data =3;
  s.push(data);
  data = 8;
  s.push(data);
  data =11;
  s.push(data);
  data = 9;
  s.push(data);
  data =25;
  s.push(data);
  data = 4;
  s.push(data);
  display(); 
  data=s.pop(); 
  cout << "popped element=%d\n",data; 
  display();
}

