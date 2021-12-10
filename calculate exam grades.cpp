#include <stdio.h>

int main(){
	
	int mark;

	
	
	again:
	printf("Enter your exam mark = ");
	scanf("%d",&mark);
	

	if(mark>=95 && mark<=100){
		printf("Your Grade = A+\n");
		printf("Your point = 4.00 ");
	}
	else if(mark<=94 && mark>=90){
		printf("Your Grade = A\n");
		printf("Your point = 3.75 ");
	}
	else if(mark<=89 && mark>=85){
		printf("Your Grade = B+\n");
		printf("Your point = 3.50 ");
	}
	else if(mark<=84 && mark>=80){
		printf("Your Grade = B\n");
		printf("Your point = 3.00 ");
	}
	else if(mark<=79 && mark>=75){
		printf("Your Grade = C+\n");
		printf("Your point = 2.50 ");
	}
	else if(mark<=74 && mark>=70){
		printf("Your Grade = C\n");
		printf("Your point = 2.00 ");
	}
	else if(mark<=69 && mark>=65){
		printf("Your Grade = D+\n");
		printf("Your point = 1.50 ");
	}
	else if(mark<=64 && mark>=60){
		printf("Your Grade = D\n");
		printf("Your point = 1.00 ");
	}
	else if(mark<=59 && mark>=0){
		printf("Your Grade = F\n");
		printf("Your point = 0.00 ");
	}
	else{
		printf("Enter valid exam mark\n");
		goto again;
	}
	
	return 0;
}

