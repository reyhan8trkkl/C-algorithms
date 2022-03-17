#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char *end;
    
    /* octal base */
    cout << "0128ai" << " to Long Int with base-0 = " << strtol("0128ai", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;
    
    /* hexadecimal base */
    cout << "0x15axzz" << " to Long Int with base-0 = " << strtol("0x15axzz", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;
    
    /* decimal base */
    cout << "23dfl" << " to Long Int with base-0 = " << strtol("23dfl", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;
    
    return 0;
}
