#include <stdio.h>

int main(){
	
	int sayi1; 
	int sayi2;
	int sayi3;
	int enbuyukdeger;
	
	tekrar:
	printf("Lutfen uc sayi girin...");
	printf("Birinci sayiyi girin = ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi girin = ");
	scanf("%d",&sayi2);
	printf("Ucuncu sayiyi girin = ");
	scanf("%d",&sayi3);
	
	if(sayi1>sayi2){
		if(sayi1>sayi3){
			enbuyukdeger = sayi1;
		}
		else{
			enbuyukdeger = sayi3;
				}

	}
	
	else{
		if(sayi2>sayi3){
			enbuyukdeger = sayi2;
		}
		else{
			enbuyukdeger=sayi3;
		}
		
	}
	if(sayi1==sayi2 && sayi1==sayi3 && sayi2==sayi3){
		printf("Girdiginiz degerler birbirine esittir..Farkli degerler girin.");
		goto tekrar;
	}
	
	
	printf("Girilen en buyuk deger = %d",enbuyukdeger);
	
	
	return 0;
}
