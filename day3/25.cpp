// C++ program to demonstrate multiple inheritance

#include<iostream>
using namespace std;

class Person
{
    public:
        void display()
        {
            cout << "This is a Person class." << endl;
        }
};

class Student
{
    public:
        void show()
        {
            cout << "This is a Student class." << endl;
        }
};

class Exam : public Person, public Student
{
    public:
        void info()
        {
            cout << "This is an Exam class inheriting from Person and Student." << endl;
        }
};

int main()
{
    Exam e;
    e.display(); // from Person class
    e.show();    // from Student class
    e.info();    // from Exam class
    return 0;
}