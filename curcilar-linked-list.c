#include <stdio.h>
#include <stdlib.h>

//�ift y�nl� bagli liste d�g�m�.
typedef struct NODE{
	//D�g�me ait veri.
	//Farkli tipte degiskenler burada tanimlanabilir.	
	int x;
	//Bir sonraki d�g�m�n adresi.
	struct NODE * next;
	//Bir �nceki d�g�m�n adresi.
	struct NODE * previous;
}NODE;


NODE * CreateNode(NODE * previous,int x){
	NODE * node;
	NODE * tmp;
	//Yeni d�g�m i�in bellekten yer ayriliyor.
	node=(NODE *)malloc(sizeof(NODE));
	if(node){
		//Yeni d�g�me veri kaydediliyor.
		node->x=x; 

		if(previous){
			//Bir �nceki d�g�m�n adresi yeni d�g�m�n bir �nceki adresine kaydediliyor.
			node->previous=previous;

			//Bir sonraki d�g�m�n adresi yeni d�g�me kaydediliyor.						
			node->next=previous->next;	

			//Bir �nceki d�g�m�n bir sonraki adresine yeni d�g�m kaydediliyor.		
			previous->next=node;

			//Bir sonraki d�g�m�n bir �nceki adresine yeni d�g�m kaydediliyor;
			tmp=node->next;
			if(tmp->previous){
				tmp->previous=node;
			}

		}else{
			//D�g�m ilk d�g�m ise sonraki ve �nceki d�g�m adresine 
			//d�g�m�n adresi kaydediliyor.
			node->next=node;
			node->previous=node;
		}

	}
	return node;
}


//Bagli listyi sondan baslayarak ekrana yazdiran fonksiyon.
void PrintListLeft(NODE * last){
	NODE * tmp=last;
	if(!tmp){
		return;
	}

	do{
		printf("%d,",tmp->x);
		//Bir �nceki d�g�m tmp degiskenine aktariliyor.
		tmp=tmp->previous;
	}while(tmp!=last && tmp);

	return;
}


//Bagli listyi bastan baslayarak ekrana yazdiran fonksiyon.
void PrintListRight(NODE * root){
	NODE * tmp=root;
	if(!tmp){
		return;
	}
	do{
		printf("%d,",tmp->x);
		//Bir sonraki d�g�m tmp degiskenine aktariliyor.
		tmp=tmp->next;
	}while(tmp!=root && tmp);
	
	return;
}

//Ana fonksiyon.
int main(void){
	NODE * tmp=NULL;
	NODE * last=NULL;
	NODE * root=NULL;
	int x=0;

	do{
		printf("\nx:");
		//Klavyeden yeni d�g�m i�in tam sayi bir deger okunuyor.
		scanf("%d",&x);
		//Okunan degerle yen bir d�g�m olusturuluyor.
		tmp=CreateNode(last,x);
		last=tmp;
		//Bagli liste sondan baslayarak ekrana yazdiriliyor.
		PrintListLeft(last);
	}while(x!=0);

	return 0;
}
