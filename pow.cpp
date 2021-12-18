#include <stdio.h>
#include <Math.h>

int main(){
	
	int base,exponent,result;
	
	printf("Enter a base value = ");
	scanf("%d",&base);
	printf("Enter an exponent value = ");
	scanf("%d",&exponent);
	result = pow(base,exponent);
	printf("Your result = %d",result);
	return 0;
}
