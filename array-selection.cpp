#include <iostream>
using namespace std;


int main() {

int min, araci;

int dizi[20] = {4,35,47,14,8, 22,88,72,62,90};

for(int i=0; i<10; i++) { 

    min = i;
    for(int j=i; j<10; j++) {
	
	 if(dizi[j] <dizi[min]){
	  min = j;
}
}
araci = dizi[i];

dizi[i]= dizi[min];

dizi[min] = araci;
}
for(int a =0; a<10;a++){

cout << dizi[a] << "\t";
}
}
