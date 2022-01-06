#include <stdio.h>

int main(){
	
    int numberone,numbertwo,result=0,remainder;
    
    printf("Enter a number = ");
    scanf("%d",&numberone);
    numbertwo=numberone;
    
    while(numbertwo !=0){
    	 remainder= numbertwo%10;
    	result+= remainder*remainder*remainder;
    	numbertwo=numbertwo/10;
	}
	
	if(result==numberone){
		printf("%d is an armstrong number",numberone);
	}
	else{
		printf("%d is not an armstrong number",numberone);
	}

	return 0;
}
