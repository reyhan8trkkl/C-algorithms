#include <iostream>
using namespace std ;
class Addition {    
public :

Addition ( int i = 0 ) { 
total = i ;
}

void numAdd ( int number ) { 
total += number ;
}

int getTotal () {
return total ;
} ;
private :

int total ;
} ;
int main () {
Addition ad ;
ad.numAdd ( 25 ) ;
ad.numAdd ( 35 ) ;
ad.numAdd ( 44) ;
cout << " The Total of the number is  " << ad.getTotal() << endl ;
return 0 ;
}
