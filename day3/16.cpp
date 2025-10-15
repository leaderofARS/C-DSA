// Write a C++ program to find the largest of three numbers.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the largest number.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number.";
    }
    else
    {
        cout << c << " is the largest number.";
    }
    cin.get();
    return 0;
}

//class is a blueprint of a object or class is user defined data type
//object is an instance of a class
//encapsulation is the process of wrapping data and functions into a single unit
//abstraction is the process of hiding the implementation details and showing only the functionality to the user
//inheritance is the process of acquiring properties and behaviors from a parent class
//polymorphism is the ability of a function or an object to take multiple forms
//function overloading is the ability to create multiple functions with the same name but different parameters
//operator overloading is the ability to create multiple operators with the same name but different parameters
//constructor is a special member function that is called when an object of the class is created
//destructor is a special member function that is called when an object of the class is destroyed
//static member is a member of a class that is shared by all objects of the class
//friend function is a function that is not a member of a class but has access to its private and protected members
//this pointer is a pointer that points to the current object
//virtual function is a member function in the base class that you expect to override in derived classes
//pure virtual function is a virtual function that has no definition in the base class
//abstract class is a class that has at least one pure virtual function and cannot be instantiated
//interface is a class that has only pure virtual functions and no data members 
//namespace is a declarative region that provides a scope to the identifiers inside it
//STL is a collection of classes and functions that implement commonly used algorithms and data structures
//template is a feature of C++ that allows you to write generic and reusable code
//exception handling is a mechanism to handle runtime errors
//lambda function is an anonymous function that can be defined in a single line
//smart pointer is a class that mimics a regular pointer but provides automatic memory management
//move semantics is a feature of C++11 that allows the resources of a temporary object to be moved rather than copied
//rvalue reference is a type of reference that can bind to a temporary object
//constexpr is a keyword that indicates that the value of a variable or function can be evaluated at compile time
//decltype is a keyword that inspects the declared type of an entity or
//typeid is an operator that returns the type information of an expression
//static_assert is a keyword that performs compile-time assertions  
//alignas is a keyword that specifies the alignment requirement of a type or variable
//alignof is a keyword that returns the alignment requirement of a type
//thread is a sequence of executable instructions that can run concurrently with other threads
//mutex is a synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads
//lock_guard is a class that provides a convenient RAII-style mechanism for owning a mutex for the duration of a scoped block
//future is a class that represents a value that may be available at some point in the future
//promise is a class that represents a value that will
