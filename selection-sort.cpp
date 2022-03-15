#include <iostream>
using namespace std;

void insertionSort(int array[],int size){
	int min_index,j,i;
	
	for(i=0;i<size;i++){
		min_index = i;
		for(int j=i+1;j<size;j++){
			
			if(array[j]<array[i]){
				min_index = j;
			}
		}
		int temp = array[i];
		array[i] = array[min_index];
		array[min_index]=temp;
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
 cout << array[k] ;
}
	return 0;
}
