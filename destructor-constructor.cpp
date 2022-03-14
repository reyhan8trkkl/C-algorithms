#include <iostream>
using namespace std;
 
class Demo
{
    private:
        const int X;
        const int Y;
 
    public:
            Demo():X(10),Y(20){};

            Demo (int a, int b) : X(a),Y(b){}; 

        void    Display();
};
 
void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    Demo d1; 
    Demo d2(30,40); 
 
    cout << "Value of d1: ";
    d1.Display();   
 
    cout << "Value of d2: ";
    d2.Display();   
     
    return 0;
}
