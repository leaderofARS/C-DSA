// Pure Virtual Function and Abstract Class in C++ 

#include<iostream>

using namespace std;

// Abstract class

class Shape
{
    public:
        virtual void area() = 0; // pure virtual function
};

// Derived class

class Circle
{
    public:
        float radius;
    Circle(float r)
    {
        radius = r;
    }
    void area()
    {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Circle c1(5.5);
    c1.area();
    return 0;   
}