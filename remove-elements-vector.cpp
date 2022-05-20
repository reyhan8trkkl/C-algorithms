#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> prime_numbers{2, 3, 5, 7};
  
  // initial vector
  cout << "Initial Vector: ";
  for (int i : prime_numbers) {
    cout << i << " ";
  }

  // remove the last element
  prime_numbers.pop_back();

  // final vector
  cout << "\nUpdated Vector: ";
  for (int i : prime_numbers) {
    cout << i << " ";
  }
  
  // remove all elements
  prime_numbers.clear();
  
  // final vector
  cout << "\nUpdated Vector: ";
  for (int i : prime_numbers) {
    cout << i << " ";
  }
  
  
  return 0;
}
