#include <stdio.h>

int main(){
	
	char lettersArray[] = {'a','b','c','d','e',};
	char *letPointer;
	
	int len,id;
	letPointer = lettersArray; // letPointer = &lettersArray[0]
	
	len = sizeof(lettersArray)/sizeof(char);
	
	for(id=0; id<len; id++){
		
		printf(" %c \n",*letPointer++);
	}
	
	
	return 0;
}
