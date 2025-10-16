// C++ program to calculate area of rectangle and circle using function overriding (run-time polymorphism)

#include<iostream>

using namespace std;

class Shape
{
    public:
        virtual void area()
        {
            cout << "Area of shape." << endl;
        }
};

class Rectangle : public Shape
{
    public:
        void area(int l, int b)
        {
            cout << "Area of rectangle: " << l * b << endl;
        }
};

class Circle : public Shape
{
    public:
        void area(int r)
        {
            cout << "Area of circle: " << 3.14 * r * r << endl;
        }
};

int main()
{
    Rectangle rect;
    Circle circ;
    int length, breadth, radius;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    rect.area(length, breadth);
    cout << "Enter radius of circle: ";
    cin >> radius;
    circ.area(radius);
    return 0;    
}