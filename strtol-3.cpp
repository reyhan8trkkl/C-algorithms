#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char *end;
    
    cout << "  25axbz" << " to Long Int with base-11 = " << strtol("  25axbz", &end, 11) << endl;
    cout << "End String = " << end << endl << endl;
    
    cout << "   110bcd" << " to Long Int with base-2 = " << strtol("   110bcd", &end, 2) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "ax110.97" << " to Long Int with base-10 = " << strtol("ax110.97", &end, 10) << endl;
    cout << "End String = " << end << endl << endl;

    return 0;
}
