#include <iostream>

using namespace std;

int main() {

    // define the collection in the loop itself
    for (int n : {1, 2, 3, 4, 5}) {
        cout << n << " ";
    }

    return 0;
}
