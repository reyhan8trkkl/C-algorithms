#include <stdio.h>

int main(){
	
	float number[1000],average=0,add=0;
	int many;
	again:
	printf("How many numbers do you want (Enter a number 1-1000) = ");
	scanf("%d",&many);
	
	if(many>0 && many<=1000){
		
		for(int i=0; i<many; i++){
		
		printf("Enter %d. number = ",i+1);
		scanf("%f",&number[i]);
		add = add + number[i];
		
	}
	
	average = add/many;
	
	printf(" Adds of numbers = %f , average of numbers = %f",add,average);
	
	}
	else{
		
		printf("Please enter a number between 1 and 1000\n");
		goto again;
	
	}
		
	return 0;
	
}
