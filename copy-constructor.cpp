#include <iostream>
#include <string.h>
using namespace std;

class person{
	private:
		char name[30];
		int age;
	
	public:

		person(){
			strcpy(name,"None");
			age = 0;
		}

		person(char n[], int a){
			strcpy(name, n);
			age = a;
		}

		person(person &p){
			strcpy(name, p.name);
			age =p.age;
		}

		void print(void){
			cout<<name<<" is "<<age<<" years old."<<endl;
		}
};
int main(){

	person p1; 
	person p2("Sally",21); 
	person p3(p2); 
	
	cout<<"object p1..."<<endl;
	p1.print();
	cout<<"object p2..."<<endl;
	p2.print();	
	cout<<"object p3..."<<endl;
	p3.print();	
	
	return 0;
}
