#include <stdio.h>

int main(){
	
	int sayi,s=0,f=1;
	
	printf("Faktoriyelini istediginiz sayiyi girin = ");
	scanf("%d",&sayi);
	
	tkr:
	s++;
	
	if(s<=sayi){
		f=s*f;
		goto tkr;
	}
	
	printf("Girdiginiz sayinin faktoriyeli = %d",f);
	
	return 0;
}
