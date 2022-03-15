#include <iostream>
using namespace std;

 void bubbleSort(int arr[],int size) 
  {
     int tmp;

    for(int i=0; i<size; i++)
    {
    int sorted=1;
      for(int j=size-1 ; j>i;j--) 
      {
        if(arr[j-1]>arr[j]) 
        {
          sorted=0;  
          tmp=arr[j-1];
          arr[j-1]=arr[j];
          arr[j]=tmp;
        }
      }
      if(sorted)
         break;
    }
  }
int main(){
	int size;
	int arr[size],i;
	
	cout << "Enter a size number of array";
	cout << endl;
	cin >> size;
	
	for(i=0;i<size;i++){
		
		cout << "Element's value: ";
		cin >> arr[i];
	}
 bubbleSort(arr,size);
 
 for(int k=0;k<size;k++){ 
 cout << arr[k] ;
}
	return 0;
}
