#include <iostream>
using namespace std;

void elementSwap(int* ele1, int* ele2)
{
	
int temp = *ele1;
*ele1 = *ele2;
*ele2 = temp;
}

int elementPartition (int array[], int less, int more)
{
int pivotelement = array[more];
int indexSmaller = (less - 1);

for (int qs = less; qs <= more - 1; qs++)
{
if (array[qs] < pivotelement)
{
indexSmaller++;
elementSwap(&array[indexSmaller], &array[qs]);
}
}
elementSwap(&array[indexSmaller + 1], &array[more]);
return (indexSmaller + 1);
}

void demoquickSort(int array[], int less, int greater)
{
if (less < greater)
{
	
int parInd = elementPartition(array, less, greater);
demoquickSort(array, less, parInd - 1);
demoquickSort(array, parInd + 1, greater);
}
}

int main()
{
	
cout << "Sorting array elemnts using quick sort in C++ \n";

int array[] = {35, 15, 90, 26, 87, 12, 5, 44, 23, 1};
int arrsize = sizeof(array) / sizeof(array[0]);
cout << "Before sort array is : \n";

int z;
for (z = 0; z < arrsize; z++)
cout << array[z] << " ";
cout << endl;
demoquickSort(array, 0, arrsize - 1);
cout << "After sorted array is : \n";

int i;
for (i = 0; i < arrsize; i++)
cout << array[i] << " ";
cout << endl;

return 0;
}
