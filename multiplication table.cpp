#include <stdio.h>

int main(){
	
	int k,l,m;
	
	printf("Carpim tablosu icin deger giriniz = ");
	scanf("%d",&k);
	
	for(l=1; l<=k;l++){
		
		for(m=1; m<=k;m++){
			
			printf("%dx%d = %d\t\n",l,m,l*m);
		}
	}
	
	
	
	return 0;
}
