#include <iostream>
using namespace std;

void insertionSort(int array[],int elemansayisi){
	
	int element,j,i;
	
	for(i=1;i<elemansayisi;i++){
		
		 element = array[i];
		 j = i-1;
		 
		while(j>=0 && array[j]>element){
			
			array[j+1] = array[j];
			j--;
		}
	    array[j+1] = element;
	}
}
int binarySearch(int arr[], int p, int r, int num) {
	insertionSort(arr,r+1);
    int ortalama = (p + r)/2;
    
    if (p <= r) {
      int ortalama = (p + r)/2;
      if (arr[ortalama] == num)
         return ortalama ;
      if (arr[ortalama] > num)
         return binarySearch(arr, p, ortalama-1, num);
      if (arr[ortalama] < num)
         return binarySearch(arr, ortalama+1, r, num);
   }
   return -1;
}
int main(){

 int dizi[]={1,7,3,88,34,76,9,24,45};
 int dizikopya[]={1,7,3,88,34,76,9,24,45};
 
 int elemansayisi = sizeof(dizi)/sizeof(dizi[0]);

 int num;
 cout << " Aramak istediginiz elemani giriniz: ";
 cin >> num;
 
insertionSort(dizi,elemansayisi); 
 
 int index = binarySearch(dizi, 0,elemansayisi-1, num);
 
  if(index == -1){
      cout<<" Aradiginiz eleman dizide bulunmamaktadir."<<endl;
   }else{
      int k = 0;
     while (k < elemansayisi)
    {
        if (dizikopya[k] == num) {
            break;
        }
        k++;
    }
    cout << " Aradiginiz elemanin indexi : " << k;
   }
	return 0;
}
