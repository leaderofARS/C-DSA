// C++ program to demonstrate hierarchical inheritance

#include<iostream>

using namespace std;

class Person
{
    public:
        void display()
        {
            cout << "This is a person class." << endl;
        }
};

class Student : public Person
{
    public:
        void show()
        {
            cout << "This is a student class." << endl;
        }
};

class Exam : public Person
{
    public:
        void info()
        {
            cout << "This is an exam class." << endl;
        }
};

int main()
{
    Exam e;
    e.display(); // from Person class
    e.info();    // from Exam class

    Student s;
    s.display(); // from Person class
    s.show();    // from Student class

    return 0;
}