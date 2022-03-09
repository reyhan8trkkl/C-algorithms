// C++ Program to insert and display data entered by using pointer notation.
#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        cin >> *(arr + i) ;

    }
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        cout << *(arr + i) << endl ;
    }
    return 0;
}
