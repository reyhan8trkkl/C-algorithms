#include <iostream>
using namespace std;

struct insan{
	string isim;
	float boy;
	float kilo;
};
int main(void){

struct insan in;

in.isim = "reyhan";
in.boy = 1.70;
in.kilo = 70;

cout<<in.isim<<endl;
cout<<in.boy<<endl;
cout<<in.kilo<<endl;

	system("pause");
	return 0;
}
