#include <iostream>
using namespace std;

struct Car {
string brand ; 
string model ;
Car( string b, string m ) {
brand = b;
model = m;
}
void displayDetails(){
cout << " brand: " << brand << endl;
cout << " model: " << model << endl;
}
};
int main()
{
Car c1 = Car("Honda", "Amaze");
cout << " Car details are as below: \n " << endl;
c1.displayDetails();
return 0;
}
