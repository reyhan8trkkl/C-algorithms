#include <iostream>
using namespace std;

int main()
{
    float arr[3];

    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}
