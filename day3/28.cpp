// Polymorphism in C++ , it allows the same function name or operator to be behave differently based on the context,
// such as the types of arguments passed to a function or the types of objects involved in an operation.
// There are two types of polymorphism in C++: 
//    compile-time (or static) polymorphism (function overloading) , and
//    run-time (or dynamic) polymorphism (function overiding).

// Function overloading : if in a class there is more than one function with the same name but different parameters,
// then it is known as function overloading. It is a compile-time polymorphism.


// C++ program to demonstrate function overloading

#include<iostream>

using namespace std;

class calculation
{
    public:
        void sum(int a, int b)
        {
            cout << "Sum of two integers: " << a + b << endl;
        }

        void sum(float a, float b)
        {
            cout << "Sum of two doubles: " << a + b << endl;
        }
        void sum(int a, int b, int c)
        {
            cout << "Sum of three integers: " << a + b + c << endl;
        }
};

int main()
{
    calculation c;
    c.sum(10, 20);
    c.sum(10.5f, 20.5f);
    c.sum(10, 20, 30);
    return 0;
}