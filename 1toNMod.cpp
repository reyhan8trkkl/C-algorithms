#include <stdio.h>

int main(){
	
	int n,x,y,i;
	
	printf("Enter a number to 1 to N = ");
	scanf("%d",&n);
	printf("Enter two numbers to calculate mod  1 to N = ");
	scanf("%d\t%d",&x,&y);
	
	for(i=1;i<=n;i++){
		if((i%x == 0) && (i%y == 0)){
			printf("%d divisible to %d and %d ",i,x,y);
           	}
	}
	
	
	
	return 0;
}
