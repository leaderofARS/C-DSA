// C++ program to illustrate the concept of instance variables

#include<iostream>
using namespace std;

class variable
{
    public:
        string name;
        int age;
        int marks;
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
    variable ob;
    ob.name = "Abhay";
    ob.age = 19;
    ob.marks = 99;
    ob.display();
    return 0;
}


//instance variable is a variable that is declared inside a class but outside any function
//instance variable is also known as non-static member variable
//each object of the class has its own copy of the instance variable
//instance variable is used to store the state of an object
//instance variable can be accessed using the object of the class
//instance variable can be initialized using constructor or using member function
//instance variable can be private, protected or public