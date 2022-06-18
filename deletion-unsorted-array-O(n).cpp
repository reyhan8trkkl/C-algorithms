#include <iostream>
using namespace std;

int* insertNum(int lastElIndex, int arr[],int size,int pos){
	    
    for (int i = pos-1; i < size; i++){
        arr[i] = arr[i+1]; 
		}
    return arr;
}
int main(){
	
	int numberArray[] = {4,67,1,45};
	int pos,num,i,size,lastIndex;
	
	size = sizeof(numberArray)/sizeof(numberArray[0]);
	
	again:
	lastIndex = size-1; 
	cout << "Here is the array: " << endl << "\t";

	for(i=0;i<size;i++){
	  	cout << numberArray[i] << "  " ;
	}

	cout << "\n Enter an position to delete element : ";
	cin >> pos;
	
	if((pos<=0) || (pos>size)){
		cout << "Invalid position \n";
		goto again;
	}else{
		if(size==1){
		cout << "Array is empty you can't delete\n";
	 }else{
	 	insertNum(lastIndex,numberArray,size,pos);
		size--;
	    goto again;	
	 }
    }
	return 0;
}

