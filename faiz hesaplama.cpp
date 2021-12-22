#include <stdio.h>

int main(){
	
	int para,yuzdefaiz,yil,BF;
	
	printf("para miktarinizi giriniz = ");
	scanf("%d",&para);
	printf("yuzde faizi giriniz = ");
	scanf("%d",&yuzdefaiz);
	printf("kac yil oldugunu giriniz = ");
	scanf("%d",&yil);
	
	BF = (para*yuzdefaiz*yil)/100;
	
	printf("%d yil sonra faiz = %d",yil,BF);
	
	
	
	return 0;
}
