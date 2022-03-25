#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
double dp = 1.5678324;
cout << "setprecision(1) : " << setprecision(1) << dp << endl;
cout << "setprecision(2) : " << setprecision(2) << dp << endl;
cout << "setprecision(3) : " << setprecision(3) << dp << endl;
cout << "setprecision(4) : " << setprecision(4) << dp << endl;
cout << "setprecision(0) : " << setprecision(0) << dp << endl;
cout << "setprecision(-1) : " << setprecision(-1) << dp << endl;
cout << "setprecision(-2) : " << setprecision(-2) << dp << endl;
return 0;
}
