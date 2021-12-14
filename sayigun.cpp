#include <stdio.h>

int main(){
	
	int sayi;
	
	printf("1-7 arasi bir sayi giriniz = ");
	scanf("%d",&sayi);
	
	switch(sayi){
		case 1: printf("Pazartesi"); break;
		case 2: printf("Sali"); break;
		case 3: printf("Carsamba"); break;
		case 4: printf("Persembe"); break;
		case 5: printf("Cuma"); break;
		case 6: printf("Cumartesi"); break;
		case 7: printf("Pazar"); break;
	}
	
	
	return 0;
}
