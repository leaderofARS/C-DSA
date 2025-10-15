// C++ program to demostrate hybrid inheritance

#include<iostream>

using namespace std;

class parent 
{
    public:
        void display()
        {
            cout << "This is a Parent class." << endl;
        }
};

class child1: public parent
{
    public: 
        void show()
        {
            cout << "This is Child1 class." << endl;
        }
};

class child2: public parent
{
    public:
        void info()
        {
            cout << "This is Child2 class." << endl;
        }
};

class child1_1 : public child1
{
    public:
        void print()
        {
            cout << "This is Child1_1 class inheriting from Child1 class." << endl;
        }
};

class child2_1 : public child2
{
    public:
        void fun()
        {
            cout << "This is Child2_1 class inheriting from Child2 class." << endl;
        }
};

int main()
{
    child1_1 c1;
    c1.display(); // from Parent class
    c1.show();    // from Child1 class
    c1.print();   // from Child1_1 class

    cout << endl;

    child2_1 c2;
    c2.display(); // from Parent class
    c2.info();    // from Child2 class
    c2.fun();     // from Child2_1 class

    return 0;
}