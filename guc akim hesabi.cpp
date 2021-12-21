#include <stdio.h>

int main(){
	
	float  akim,volt,direnc,guc;
	
	printf("akim degerini girin = ");
	scanf("%f",&akim);
	printf("direnc degerini girin = ");
	scanf("%f",&direnc);
	
	volt = akim*direnc;
	guc = akim*akim*direnc;
	
	printf("volt degeri=%f \nguc degeri=%f",volt,guc);
	
	
	return 0;
}
