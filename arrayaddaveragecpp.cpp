#include <stdio.h>

int main(){
	
	float number[1000],average=0,add=0;
	int many;
	
	printf("How many numbers do you want (Enter a number 1-1000) = ");
	scanf("%d",&many);
	
	for(int i=0; i<many; i++){
		
		printf("Enter %d. number = ",i+1);
		scanf("%f",&number[i]);
		add = add + number[i];
		
	}
	
	average = add/many;
	
	printf(" Adds of numbers = %f , average of numbers = %f",add,average);
	
}
