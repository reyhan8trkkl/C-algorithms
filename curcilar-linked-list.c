#include <stdio.h>
#include <stdlib.h>

//Çift yönlü bagli liste dügümü.
typedef struct NODE{
	//Dügüme ait veri.
	//Farkli tipte degiskenler burada tanimlanabilir.	
	int x;
	//Bir sonraki dügümün adresi.
	struct NODE * next;
	//Bir önceki dügümün adresi.
	struct NODE * previous;
}NODE;


NODE * CreateNode(NODE * previous,int x){
	NODE * node;
	NODE * tmp;
	//Yeni dügüm için bellekten yer ayriliyor.
	node=(NODE *)malloc(sizeof(NODE));
	if(node){
		//Yeni dügüme veri kaydediliyor.
		node->x=x; 

		if(previous){
			//Bir önceki dügümün adresi yeni dügümün bir önceki adresine kaydediliyor.
			node->previous=previous;

			//Bir sonraki dügümün adresi yeni dügüme kaydediliyor.						
			node->next=previous->next;	

			//Bir önceki dügümün bir sonraki adresine yeni dügüm kaydediliyor.		
			previous->next=node;

			//Bir sonraki dügümün bir önceki adresine yeni dügüm kaydediliyor;
			tmp=node->next;
			if(tmp->previous){
				tmp->previous=node;
			}

		}else{
			//Dügüm ilk dügüm ise sonraki ve önceki dügüm adresine 
			//dügümün adresi kaydediliyor.
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
		//Bir önceki dügüm tmp degiskenine aktariliyor.
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
		//Bir sonraki dügüm tmp degiskenine aktariliyor.
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
		//Klavyeden yeni dügüm için tam sayi bir deger okunuyor.
		scanf("%d",&x);
		//Okunan degerle yen bir dügüm olusturuluyor.
		tmp=CreateNode(last,x);
		last=tmp;
		//Bagli liste sondan baslayarak ekrana yazdiriliyor.
		PrintListLeft(last);
	}while(x!=0);

	return 0;
}
