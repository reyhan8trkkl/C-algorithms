#include <iostream>
using namespace std;

struct Car {
string brand ; 
string model ;
string color ;
int seats;
};
int main()
{
Car c1 = { "Honda", "Amaze", "Red", 5}; 
cout << " Car details are as below: \n " << endl;
cout << " brand: " << c1.brand << endl; 
cout << " model: " << c1.model << endl; 
cout << " color: " << c1.color << endl;
cout << " Seat Capacity: " << c1.seats << endl;
return 0;
}
