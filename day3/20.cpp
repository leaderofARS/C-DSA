// C++ program to demonstrate the use of parameterized constructor 

#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;
    // parameterized constructor
    Circle(float r) : radius(r) {}
    float area()
    {
        return 3.14159f * radius * radius;
    }
};

int main()
{
    Circle c1(5.5f);
    cout << "Area of Circle: " << c1.area() << endl;
    return 0;
}