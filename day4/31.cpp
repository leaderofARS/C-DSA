// Encapsulation in C++ is a fundamental concept of object-oriented programming that binds together the data and,
// functions that manipulate the data, and keeps both safe from outside interference and misuse. 
// It restricts direct access to some of an object's components, which can prevent the accidental modification of data. 
// This is typically achieved using access specifiers: private, protected, and public.



#include<iostream>

using namespace std;

class Student 
{
    private:
        int rollNo;
        string name;
    public:
        // setter functions to set the values of private members
        void setData(int r, string n) 
        {
            rollNo = r;
            name = n;
        }
        // getter functions to access the values of private members
        void display()
        {
            cout << "Roll No:" << rollNo << endl;
            cout << "Name:" << name << endl;
        }
};

int main()
{
    Student s1;
    s1.setData(101, "Alice");
    s1.display();
    return 0;
}