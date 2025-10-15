// C++ program to demonstrate the working of class and objects

#include<iostream>
using namespace std;

class example
{
    public:
    void add(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
    }
};

int main()
{
    example ob;
    ob.add(5, 10);
    cout << "\n";
    return 0;
}