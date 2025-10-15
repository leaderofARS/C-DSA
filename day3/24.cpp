// C++ program to demonstrate multilevel inheritance

#include <iostream>
using namespace std;

class person
{
    public:
        string name;
        int age;
        person(const string &n, int a) : name(n), age(a) {}
        void display() const
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public person
{
    public:
        int rollno;
        float marks;
        Student(string n, int a, int r, float m) : person(n, a), rollno(r), marks(m) { }
        void display()
        {
            person::display();
            cout << "Roll No: " << rollno << endl;
            cout << "Marks: " << marks << endl;
        }
};

class Teacher : public person
{
    public:
        string subject;
        float salary;
        Teacher(const string &n, int a, const string &s, float sal) : person(n, a), subject(s), salary(sal) { }
        void display() const
        {
            person::display();
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    Student s("Alice", 20, 101, 95.5f);
    Teacher t("Bob", 45, "Mathematics", 50000.0f);
    cout << "Student Details:" << endl;
    s.display();
    cout << endl;
    cout << "Teacher Details:" << endl;
    t.display();
    return 0;
}