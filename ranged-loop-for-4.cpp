#include <iostream>
using namespace std;

/* Notice the use of & before var. Here,
int var : num - Copies each element of num to the var variable in each iteration. 
This is not good for computer memory.
int &var : num - Does not copy each element of num to var. 
Instead, accesses the elements of num directly from num itself. 
This is more efficient. Note: The & operator is known as the reference operator. 
If we are not modifying the array/vector/collection within the loop, 
it is better to use the const keyword in range declaration. */

int main() {

    // initialize array  
    int numArray[] = {1, 2, 3, 4, 5};

    // access memory location of elements of num
    for (int &var : numArray) {
    	cout << var << " " << &var << endl;   
		 
     }
  
    return 0;
}
