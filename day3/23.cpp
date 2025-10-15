// C++ program to demonstrate single-level inheritance

#include <iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout << "This is class A." << endl;
        }
};

class B: public A
{
    public:
        void print()
        {
            cout << "This is class B." << endl;
        }
};

int main()
{
    B b;
    b.display(); // inherited from class A
    b.print();   // own method
    return 0;
}