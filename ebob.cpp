#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ebob,sayi1,sayi2,i;
	
	printf("1. sayiyi girin = ");
	scanf("%d",&sayi1);
	printf("2. sayiyi girin = ");
	scanf("%d",&sayi2);
	
	if(sayi1>=sayi2){
	
	for(i=sayi2; i>=1; i--){
		
		if(sayi1%i==0 && sayi2%i==0){
			printf("%d ",i);
		    break;
	       	}
		}
    }
    
	else{
		
      for(i=sayi1; i>=1; i--){
		
		if(sayi1%i==0 && sayi2%i==0){
			printf("%d ",i);
		    break;
	       	}
		}
	 	
	 }
	
	return 0;
}


