#include <stdio.h>

int main(){
	
	int number,i,factorial;
	
	printf("enter a number to calculate its factorial = ");
	scanf("%d",&number);
	
	factorial=1;
	for(i=1; i<=number; i++){
		
		factorial*=i;
	}
	printf("Your result = %d ",factorial);
	
	
	
	return 0;
}
