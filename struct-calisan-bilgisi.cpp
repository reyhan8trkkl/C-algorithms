#include <stdio.h>
#include <string.h>

struct calisan{
	
	char ad[30];
	char soyad[30];
    int calisanNo;
	int telNo;
	char departman[40];
	char okul[40];
	char bolum[40];	
	int yas;
}calisan1;

int main(){
	
	strcpy(calisan1.ad,"Reyhan");
	strcpy(calisan1.soyad,"Turkkal");
	calisan1.calisanNo = 3827491;
	calisan1.telNo = 540237774;
	strcpy(calisan1.departman,"Yazilim");
	strcpy(calisan1.okul,"Kirklareli Universitesi");
	strcpy(calisan1.bolum,"Yazilim Muhendisligi");
	calisan1.yas = 21;
	
	printf("Calisanin adi : %s \n",calisan1.ad);
	printf("Calisanin soyadi : %s \n",calisan1.soyad);
	printf("Calisanin no'su : %d \n",calisan1.calisanNo);
	printf("Calisanin telefonu : %d \n",calisan1.telNo);
	printf("Calisanin departmani : %s \n",calisan1.departman);
	printf("Calisanin okulu : %s \n",calisan1.okul);
	printf("Calisanin bolumu : %s \n",calisan1.bolum);
	printf("Calisanin yasi : %d \n",calisan1.yas);
	
	return 0;
}
