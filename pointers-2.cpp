#include <iostream>
using namespace std;

int main() {
	
    int var = 5;

    // declare pointer variable
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "\nvar = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    
    return 0;
}
