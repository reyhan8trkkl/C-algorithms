#include <stdio.h>


int main(){
	
    int x=1, y=1, z, n;
      
   
   printf("(Kac tane sayi istiyorsunuz) \n How many numbers do you want ? : ");
   scanf("%d",&n);
    
    for(int i=0; i<n; i++){
    	z=x+y;
    	x=y;
    	y=z;
    	printf("%d ",z);}
    	
    	
   
	return 0;
}
