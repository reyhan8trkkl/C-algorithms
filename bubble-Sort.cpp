#include <iostream>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }        
        if (swapped == false)
            break;
    }
}

main(){
	int size;
	int array[size],i;
	
	cout << "Enter a size number of array";
	cout << endl;
	cin >> size;
	
	for(i=0;i<size;i++){
		
		cout << "Element's value: ";
		cin >> array[i];
	}
 bubbleSort(array,size);
 
 for(int k=0;k<size;k++){ 
 cout << array[k] ;
}
	return 0;
}
