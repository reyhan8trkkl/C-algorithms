#include<iostream>
using namespace std;

int main() { 

int dizi[10] = {4,35,47,24,8,22,88,72,62,90};

for (int adim=1; adim<10; adim++) {

   for(int j=0;j<10-adim;j++){

     if(dizi[j]>dizi[j+1]){
	 
        int araci = dizi[j]; 

        dizi[j]=dizi[j+1];
        
        dizi[j+1]=araci;
          }
      }
  }
  for(int a=0;a<10;a++){
  	cout << dizi[a] << "\t";
  }
  
}
