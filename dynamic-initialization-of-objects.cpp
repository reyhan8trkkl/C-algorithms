#include <iostream>
using namespace std;

struct Student {
private:
	
    int rNo;
    float perc;
    
public:
	
    Student(int r, float p)
    {
        rNo = r;
        perc = p;
    }

    void read(void)
    {
        cout << "Enter roll number: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> perc;
    }
    void print(void)
    {
        cout << endl;
        cout << "Roll number: " << rNo << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};

int main()
{
    cout << "Enter roll number to initialize the object: ";
    int roll_number;
    cin >> roll_number;
    cout << "Enter percentage to initialize the object: ";
    float percentage;
    cin >> percentage;

    struct Student std(roll_number, percentage);

    cout << "After initializing the object, the values are..." << endl;
    std.print();

    std.read();
    std.print();

    return 0;
}
