#include <iostream>
using namespace std;
int main(){

   int sayilar[2][3];
   
    
//	cout<<"Birinci eleman = ";cin>>sayilar[0][0];
//	cout<<"Birinci eleman = ";cin>>sayilar[0][0];
//	cout<<"Birinci eleman = ";cin>>sayilar[0][0];
cout<<"Elemanlari giriniz"<<endl;
  for(int i=0;i<2;i++){
  	for(int j=0;j<3;j++){
  		cin>>sayilar[i][j];
	  }
  }
  cout<<"Elemanlar"<<endl;
   for(int i=0;i<2;i++){
  	for(int j=0;j<3;j++){
  	cout<<sayilar[i][j]<<endl;
	  }
  }
	system("pause");
	return 0;
}
