#include <iostream>
using namespace std;

int main() {

    // initialize array  
    int numArray[] = {1, 2, 3, 4, 5};

    // use of ranged for loop to print array elements  
    for (int n : numArray) {
        cout << n << " ";
    }
  
    return 0;
}
