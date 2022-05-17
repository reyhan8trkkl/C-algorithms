#include <iostream>
#include <vector>
using namespace std;

int main() {

    // declare and initialize vector  
    vector<int> num_vector = {1, 2, 3, 4, 5};

    // print vector elements  
    for (int n : num_vector) {
        cout << n << " ";
    }
  
    return 0;
}
