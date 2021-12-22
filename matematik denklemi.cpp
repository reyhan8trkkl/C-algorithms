#include <stdio.h>

int main(){
	
	float a,b,c,x,sonuc;
	
	printf("ax^2 + bx + c seklinde verilen denkleme deger verin \n");
	
	printf("a degerini girin:");
	scanf("%f",&a);
	printf("b degerini girin:");
	scanf("%f",&b);
	printf("c degerini girin:");
	scanf("%f",&c);
	printf("x degerini girin:");
	scanf("%f",&x);
	
	sonuc = a*x*x + b*x + c;
	
	printf("Denklemin sonucu :%f",sonuc);
	
	
	
	
	return 0;
}
