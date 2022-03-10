#include <iostream>
using namespace std;

class Student {
    int age;

   public:

    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};
int main() {

    Student* ptr = new Student();

    ptr->getAge();
    
    delete ptr;

    return 0;
}
