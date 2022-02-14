#include <stdio.h>

int main(){
	
	int adet;
	float adetfiyat;
	float satisfiyat;
	
	tekrar:
	printf("Kac adet istediginizi giriniz = ");
	scanf("%d",&adet);
	
	if(adet>0 && adet<=100){
		adetfiyat=6.5;
	}
	else if(adet>100 && adet<=200){
		adetfiyat=5;
	}
	else if(adet>200 && adet<=400){
		adetfiyat=4.5;
	}
	else if(adet>400){
		adetfiyat=4;
	}
	else{
		printf("0'dan buyuk degerler giriniz");
		goto tekrar;
	}
	
	satisfiyat = adet*adetfiyat;
	
    printf("Odeyeceginiz miktar = %.2f tl'dir..'",satisfiyat);

	return 0;
}
