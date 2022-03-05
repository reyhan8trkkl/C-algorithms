#include <iostream>
using namespace std;

struct Car {
string brand ; 
string model ;
string color ;
int seats;
} c1; 
int main()
{

c1.brand = "Honda"; 
c1.model = "City";
c1.color = "White";
c1.seats = 5;
cout << " Car details are as below: \n " << endl;
cout << " brand: " << c1.brand << endl; 
cout << " model: " << c1.model << endl; 
cout << " color: " << c1.color << endl;
cout << " Seat Capacity: " << c1.seats << endl;
return 0;
}
