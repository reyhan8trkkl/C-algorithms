#include <iostream>
using namespace std ;
class abstractionClass 
{
private :
int x , y ; 
public :

void set ( int a , int b )
{
x = a ;
y = b ;
}
void display () 
{
cout << " x  =  " << x  << endl ;
cout << " y  = " << y << endl ;
}
} ;
int main ()
{
abstractionClass obj ; 
obj.set ( 110 , 250 ) ;
obj.display () ;
return 0 ;
}
