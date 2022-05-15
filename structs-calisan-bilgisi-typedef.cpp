#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct calisanlar{
	
	char ad[30];
	char soyad[30];
	int calisanno;
	int telno;
	char departman[40];
	char okul[40];
	char bolum[40];
	int yas;
	
}calisan;

int main(){
	
	calisan calisan1;
	
	strcpy(calisan1.ad,"Reyhan");
	strcpy(calisan1.soyad,"Turkkal");
	calisan1.calisanno = 2911;
	calisan1.telno = 58328371;
	strcpy(calisan1.departman,"Yazilim");
	strcpy(calisan1.okul,"Kirklareli Universitesi");
	strcpy(calisan1.bolum,"Yazilim Muhendisligi");
	calisan1.yas = 21;
	
	printf("Calisanin adi : %s \n",calisan1.ad);
	printf("Calisanin soyadi : %s \n",calisan1.soyad);
	printf("Calisanin no'su : %d \n",calisan1.calisanno);
	printf("Calisanin telefonu : %d \n",calisan1.telno);
	printf("Calisanin departmani : %s \n",calisan1.departman);
	printf("Calisanin okulu : %s \n",calisan1.okul);
	printf("Calisanin bolumu : %s \n",calisan1.bolum);
	printf("Calisanin yasi : %d \n",calisan1.yas);	
	
	
	return 0;
}
