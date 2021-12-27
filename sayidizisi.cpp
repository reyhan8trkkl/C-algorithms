#include <stdio.h>
#include <stdlib.h>
 
 int sayidizisi[10] = {30,25,22,17,98,47,3,55,126,10};
 float toplama=0,ortalama;
 float ilkbestoplam,kalanortalama;
 int islemno;

 void besortalama(){
  float sayidizisi[10] = {30,25,22,17,98,47,3,55,126,10};
  float kalanortalama;
  kalanortalama = (sayidizisi[5]+sayidizisi[6]+sayidizisi[7]+sayidizisi[8]+sayidizisi[9])/5;
  printf("%f",kalanortalama);
 }
 
int main() 
{
  tekrar:
   printf("'30,25,22,17,98,47,3,55,126,10'\n1-Toplama hesaplama\n2-Ortalama hesaplama\n3-Ilk 5 elemanin toplami\n4-Kalan 5 elemanin ortalamasi\nDiziye uygulanacak islemi tuslayin = ");
   scanf("%d",&islemno);
    
 switch(islemno){
    	
 ilkbestoplami:
   ilkbestoplam = sayidizisi[0]+sayidizisi[1]+sayidizisi[2]+sayidizisi[3]+sayidizisi[4];
   printf("%f\n",ilkbestoplam);
   goto tekrar;
    	

  case 1: 
         
  for(int i=1; i<10; i++){
	
     toplama = toplama+sayidizisi[i-1];
     }
   printf("1. isleminizin sonucu = %f ",toplama);
    break;

  case 2: 

    for(int i=1; i<10; i++){
	
      toplama = toplama+sayidizisi[i-1];
	     }
     ortalama = toplama/10;
    	 
     printf("2. isleminizin sonucu = %f ",ortalama);
	   break;

  case 3:

    goto ilkbestoplami;
    printf("%f",ilkbestoplam);
    break;
    case 4:
    besortalama();

    
 	break;
		
	 
   default: goto tekrar;
     }
  
	 
	return 0; 
   
}
