#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    float marks;
    // parameterized constructor (initializer list)
    Student(const string &n, int r, float m) : name(n), rollno(r), marks(m) {}
    void grade() const
    {
        if (marks >= 90)
            cout << name << " has secured A grade." << endl;
        else if (marks >= 75)
            cout << name << " has secured B grade." << endl;
        else if (marks >= 60)
            cout << name << " has secured C grade." << endl;
        else
            cout << name << " has secured F grade." << endl;
    }
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << fixed << setprecision(2) << marks << endl;
    }
};

int main()
{
    Student s1("Alice", 101, 92.5f);
    s1.display();
    s1.grade();
    return 0;
}