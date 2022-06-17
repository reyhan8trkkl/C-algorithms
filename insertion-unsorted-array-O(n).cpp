#include <iostream>
using namespace std;

int* insertNum(int lastElIndex, int arr[],int num, int pos){
	
    lastElIndex++;
    
    for (int i = lastElIndex; i >= pos; i--){
        arr[i] = arr[i-1]; 
		}
    arr[pos - 1] = num;
    return arr;
}
int main(){
	
	int numberArray[7] = {4,67,1,45};
	int pos,num,i,size,lastIndex;
	
	size = sizeof(numberArray)/sizeof(numberArray[0]);
	
	again:
	cout << "The size of array is 7. Here is the array: " << endl << "\t";

	for(i=0;i<size;i++){
		if(numberArray[i]!=NULL){
	  	cout << numberArray[i] << "  " ;
	  	lastIndex = i; }
	}
  
   if(lastIndex==size-1){
		cout << "Array is full you can't add element\n";
	}else{
	cout << "\n Enter an element to insert : ";
	cin >> num;
	cout << "\n Enter an position to insert element : ";
	cin >> pos;
	
	if((pos<=0) || (pos>size+1) || (pos>lastIndex+2)){
		cout << "Invalid position \n";
		goto again;
	}else{
		insertNum(lastIndex,numberArray,num,pos);
	    goto again;	}
}
	return 0;
}
