#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
    	for(j=1;j<n-i;j++){
    		
    		if(arr[j-1]>arr[j]){
    			
    			int temp = arr[j];
    			arr[j]=arr[j-1];
    			arr[j-1]=temp;
			}
		}
    }
}
int main(){
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
