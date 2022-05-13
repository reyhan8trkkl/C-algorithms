#include <stdio.h>

int main(){
	
	int *ip1, *ip2, id1, id2;
	
	ip1 = &id1;
	id1 = 22;
	ip2 = &id2;
	*ip2 = 54;
	
	printf("Pointer one's address: %p \n",&ip1);
	printf("Pointer two's address: %p \n",&ip2);
	printf("Id one's address: %p \n",ip1);
	printf("Id two's address: %p \n",ip2);
	
	return 0;
}
