// Parameterized Constructor

#include <iostream>
using namespace std;

class student
{
    public:
        int age;
        string name;
        float marks;
        student(int a, string n, float m)
        {
            age = a;
            name = n;
            marks = m;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
    student ob(19, "Abhay", 99.5);
    ob.display();
    return 0;
}