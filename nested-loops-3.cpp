#include <iostream>
int main () {
using namespace std;
int m;
int n;
for (m = 10; m <= 11; m++) {
cout << "Table of " << m << endl;
for (n = 1; n <= 10; n++) {
cout << m << "*" << n << "=" << (m*n) << endl;
}
}
return 0;
}
