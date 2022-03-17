#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    char *end;
    
    cout << "128bz" << " to Long Int with base-5 = " << strtol("128bxz", &end, 5) << endl;
    cout << "End String = " << end << endl << endl;
    
    cout << "128bz" << " to Long Int with base-12 = " << strtol("128bxz", &end, 12) << endl;
    cout << "End String = " << end << endl << endl;
    
    cout << "128bz" << " to Long Int with base-36 = " << strtol("128bxz", &end, 36) << endl;
    cout << "End String = " << end << endl << endl;
    
    return 0;
}
