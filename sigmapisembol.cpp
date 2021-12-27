#include <stdio.h>
#include <stdlib.h>

float pay;
float payda;
float sonuc;
float toplam=0;
float toplamsonuclari[20];
float carpim=1;

float toplama_sembolu_islemi (int a,int b){
 pay=a-b;
 payda=a+b;
 sonuc=pay/payda;
 toplam = toplam + sonuc;
}

int main(){

    for(int n=1; n<21; n++){
		
	 for(int i=1; i<n+1; i++){
			
	  toplama_sembolu_islemi(i,n);  }
	  toplamsonuclari[n-1]=toplam;
	  toplam=0;
	  }


    for(int m=1; m<21; m++){
		
         carpim = carpim*toplamsonuclari[m-1];
	   }
	
 printf("%f sonucunuz...",carpim);
 printf("\nyazilan indisin elemani %f..",toplamsonuclari[16]);//dilerseniz indis sonuclarina da bakabilirsiniz...
	
	
	return 0;
}
