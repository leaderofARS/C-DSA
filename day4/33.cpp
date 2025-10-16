// Example of dynamic memory allocation in C++

#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int; // dynamically allocate memory for an integer

    *ptr = 42;

    cout << "Value: " << *ptr << endl;

    delete ptr; // free the allocated memory

    return 0;
}