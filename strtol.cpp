#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    int base = 10;
    char str[] = "27ab_1x";
    char *end; 
    long int num;
    
    num = strtol(str, &end, base);
    cout << "Number in  String = " << str << endl;
    cout << "Number in Long Int = " << num << endl;
    cout << "End String = " << end << endl << endl;
    
    strcpy(str, "27");
    cout << "Number in  String = " << str << endl;
    num = strtol(str, &end, base);
    cout << "Number in Long Int = " << num << endl;
    if (*end) {
        cout << end;
    } else {
        cout << "Null pointer";
    }
    return 0;
}
