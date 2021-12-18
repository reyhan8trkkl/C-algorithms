#include <stdio.h>

int main(){
	
	//1'den N'e kadar olan sayilarin toplamini yazdiran algoritma
	//Algorithm that prints the sum of numbers from 1 to N
	
	int n,i,sum;
	
	printf("Enter a number for sum of numbers from 1 to n = ");
	scanf("%d",&n);
	
	i = 1;
	sum = 0;
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	printf("Sum of numbers = %d",sum);


	return 0;
}
