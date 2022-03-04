#include <iostream>
using namespace std;


int main(){

   float sayilar[5] = {2,6,9,1,8};
   float n=5, toplam=0,ortalama=0;
   
   for(int i=0;i<n;i++){
   	toplam+=sayilar[i];
   	ortalama=toplam/n;
   	
   }

	cout<<"Toplam = "<<toplam; cout<<"\n ";
	cout<<"Ortalama = "<<ortalama; cout<<"\n";
	system("pause");
	
	
	return 0;
}
