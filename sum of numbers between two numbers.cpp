#include <stdio.h>


int main(){
	
	int first,last,sum=0;
	
	printf("Enter beginning number: ");
	scanf("%d",&first);
	
	printf("Enter ending number: ");
	scanf("%d",&last);
	
	 for(;first<=last;first++){
	 	
	 	sum+=first;

	 }
		printf("%d ",sum);
	
	return 0;
}
