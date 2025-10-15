
// C++ program to demonstrate inheritance

#include <iostream>

using namespace std;

class parent
{
    public:
        void display()
        {
            cout << "This is the parent class." << endl;
        }
};

class child:public parent
{
    public:
        void print()
        {
            cout << "This is the child class." << endl;
        }
};

int main()
{
    child c;
    c.display(); // inherited from parent class
    c.print();   // own method
    return 0;
}