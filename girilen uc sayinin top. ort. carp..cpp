#include <stdio.h>

int main(){
	
	int sayi1,sayi2,sayi3,toplam,carpim,ortalama;
	
	printf("1.sayiyi girin ");
	scanf("%d",&sayi1);
	
	printf("2.sayiyi girin ");
	scanf("%d",&sayi2);
	
	printf("3. sayiyi girin ");
	scanf("%d",&sayi3);
	
    toplam = sayi1+sayi2+sayi3;
	
	carpim = sayi1*sayi2*sayi3;
	
	ortalama = (sayi1+sayi2+sayi3)/3;
	
	printf("toplam = %d\ncarpim = %d\nortalama = %d\n",toplam,carpim,ortalama);
	
	
	
	return 0;
}
