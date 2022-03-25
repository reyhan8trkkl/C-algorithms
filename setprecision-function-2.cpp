#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main ()
{
	
double dp = 1.5678324;
cout<< "The default precision (6) is : " << dp << endl;
cout<< "The max precision is : " << setprecision(numeric_limits<double>::digits10 + 1);
cout<< dp << endl;
cout<< "The setprecision (7) is : " << setprecision(7) << dp << endl;

return 0;
}
