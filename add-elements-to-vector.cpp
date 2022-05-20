#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
  
  // add the integers 6,7 and 8 to the vector
  num.push_back(6);
  num.insert(num.end(),7);
  num.emplace(num.end(),8);
  

  cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  return 0;
}
