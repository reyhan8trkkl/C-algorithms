#include <stdio.h>

int main(){
	
	char password[100];
	char passwordv[100]; 
	int i=0, wrong=0;
	

	
	printf("Enter your password = ");
	scanf("%s",&password);
	
	printf("Enter your password again = ");
	scanf("%s",&passwordv);
	
	while(1){
	
	while(!(password[i] == '\0' && passwordv[i] == '\0')){
		
		if(password[i] != passwordv[i]){
			printf("Wrong passwords, try again...\n");
			wrong=1;
				break;
		}
		 else{
		 	i++;
		 }
	
	}
	
	if(wrong==0){
	printf("Password verified...");}
	break;
}
	
	
	
	return 0;
}
