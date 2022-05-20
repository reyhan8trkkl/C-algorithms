#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> num {1, 2, 3};

// gives garbage value
cout << num[4] << endl;

// throws an exception
cout << num.at(4);

  return 0;
}
