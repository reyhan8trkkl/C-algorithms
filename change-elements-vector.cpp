#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (const int& number : numbers) {
    cout << number << "  ";
  }
  numbers.at(1) = 9;
  numbers.at(4) = 7;

  cout << "\nUpdated Vector: ";

  for (const int& number : numbers) {
    cout << number << "  ";
  }

  return 0;
}
