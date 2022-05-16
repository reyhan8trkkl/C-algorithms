#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 


//bazi temel tanimlar
#define MAX 20 
char str[MAX], stack[MAX]; 
int top=-1;
//iki temell islevi tanimlayalim
void push(char c) {
stack[++top]=c; 
}
char pop() {
return stack[top--]; 
}

//postfix notasyonu ile girilen ifadenin infixe cevrilmesi
void post_in() {
	
	int n,i,j=0; 
	char x[20];
	strrev(str); //metni once ters cevirelim
	n=strlen(str); //uzunlugu bulalim
	
	for(i=0; i<MAX; i++) //MAX ile tanimli boyut kadar bos elemanlardan olusan bir stack olusturalim
		stack[i]='\0'; 
		
	printf("Infix notasyonu : \t");
	for(i=0; i < n; i++) {
		if(str[i]=='+'|| str[i]=='-'|| str[i]=='/'|| str[i]=='*') //eger okunan simge bunlardan biriyse ekleyelim
		{ 
			push(str[i]); 
		} 
		else 
		{
			x[j]=str[i]; //once gecici bir alana alalim 
			j++; //sonraki deger icin arttiralim
			x[j]=pop();  //stacktaki elemani silelim
			j++; //yine arttiralim
		}
	} 
	x[j]=str[top--]; //stack icinde eleami x dizine alalim
	strrev(x); //tekrar ters cevirelim
	printf("%s\n",x); 
}
	 
 


int main(int argc, char *argv[]) {
	
	printf("ab+cd-* olarak girilen notasyonun\n");
	strcpy(str, "ab+cd-*"); 
	post_in();
	return 0;
}
