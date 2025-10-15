// Function overriding : if a derived class has a function with the same name and parameters as a function in its base class,
// then the function in the derived class overrides the function in the base class. It is a run-time polymorphism.


#include <iostream>

using namespace std;

class parent
{
    public:
        void display()
        {
            cout << "This is a Parent class." << endl;
        }
};

class child : public parent
{
    public:
        void display()  // function overriding
        {
            cout << "This is Child class." << endl;
        }
};

int main()
{
    child C;
    C.display();
    return 0;
}
