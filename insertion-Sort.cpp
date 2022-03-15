#include <iostream>
using namespace std;

void insertionSort(int array[],int size){
	int element,j,i;
	for(i=1;i<size;i++){
		
		 element = array[i];
		 j = i-1;
		 
		while(j>=0 && array[j]>element){
			
			array[j+1] = array[j];
			j--;
		}
	    array[j+1] = element;
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
 insertionSort(array,size);
 
 for(int k=0;k<size;k++){ 
 cout << array[k];
}
	return 0;
}
