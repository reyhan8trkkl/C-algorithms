#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int yaricap;
	float pi = 3.14;
	
	printf("yaricap degerini giriniz:")	;
	scanf("%d",&yaricap);
	
	printf("%d yaricapli dairenin alani %f",yaricap,pi*yaricap*yaricap);
	printf("\n%d yaricapli dairenin cevresi %f",yaricap,2*pi*yaricap);
	
	
	
	return 0;
}
