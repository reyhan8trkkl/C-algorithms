#include<iostream>
using namespace std;
int main()
{
int fibonacci[25], i, num;
cout << "Enter random number to print fibonacci series:";
cin >> num;
fibonacci[0] = 0;
fibonacci[1] = 1;
for (i = 2; i < num; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}
cout <<"Fibonacci Series for a given number:" << endl;
for (i = 0; i < num; i++)
{
cout << fibonacci[i] <<endl;
}
return 0;
}
