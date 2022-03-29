#include <iostream>
using namespace std;

class TestMutable {
public:
int num;
mutable int mutnum;
TestMutable(int x=0, int y=0) {
num=x;
mutnum=y;
}
void setnum(int x=0) {
num = x;
}
void setb(int y=0) {
mutnum = y;
}
void disp() const{
cout<<endl<<"NUmber: "<<num<<" Mutable Number: "<<mutnum<<endl;
}
};
int main() {
const TestMutable t(10,20);
cout<<t.num<<" "<<t.mutnum<<"\n";

t.mutnum=100; 
cout<<t.num<<" "<<t.mutnum<<"\n";
t.disp();
return 0;
}
