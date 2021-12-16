#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int kisakenar,uzunkenar;
	
	printf("lutfen kisakenari giriniz:");
	scanf("%d",&kisakenar);
	printf("lutfen uzun kenari giriniz:");
	scanf("%d",&uzunkenar);
	printf("%d ve %d uzunluklarina sahip dikdortgeninizin alani : %d",kisakenar,uzunkenar,kisakenar*uzunkenar);
	printf("\n%d ve %d uzunluklarina sahip dikdortgeninizin cevresi : %d",kisakenar,uzunkenar,2*(kisakenar+uzunkenar));
	
	
	
	
	
	return 0;
}
