#include <stdio.h>

int main(){
	
	int n,s=2;
	
	printf("1'den n'e kadar cift olan sayilari bastiran programin algoritmasi");
	
	printf("Bir n degeri girin = ");
	scanf("%d",&n);
	
	tkr:
	if(s<n){
		printf("%d\n",s);
		s = s+2;
		goto tkr;
	}
	
	
	
	return 0;
}
