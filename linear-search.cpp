#include <iostream>
using namespace std;

int linear(int dizi[], int elemansayisi, int aranan)
{
    int i;
    for (i = 0; i < elemansayisi; i++)
        if (dizi[i] == aranan)
            return i;
    return -1;
}
int main() {

int elemansayisi;
cout <<" Dizinin eleman sayisini giriniz: ";
cin >> elemansayisi;
cout << endl;

int dizi[elemansayisi];
int eleman;

cout <<" Dizinin elemanlarini giriniz " << endl;

for(int a =0; a<elemansayisi;a++){
cin >> dizi[a];
}

cout <<" Aramak istediginiz elemani giriniz :" <<endl;
cin >> eleman;

int sonuc = linear(dizi,elemansayisi,eleman);

 if (sonuc == -1)
        cout << " Aranan eleman dizide bulunmamaktadir!";
    else
        cout << " Elemanin indexi: " << sonuc;

 return 0;
}
