#include <stdio.h>

#define lookclock(yesno) (yesno == 'y' || yesno == 'Y') ? __TIME__ : "You didn't want to see the clock..." 

int main(){
	
	char answer;

	printf("If you want to see the clock enter 'y', if you don't enter any letter = ");
	scanf("%c",&answer);
	
	if(lookclock(answer)){
		printf("%s",lookclock(answer));
		
	}

	return 0;
}
