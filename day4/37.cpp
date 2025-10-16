// C++ STL list: The C++ Standard Template Library (STL) provides a doubly linked list implementation through the <list> header. A doubly linked list allows for efficient insertion and deletion of elements from both ends of the list.
// Example of using STL list and its functions

#include<iostream>

#include <list>

using namespace std;

int main()
{
    list <int> dl1;
    dl1.push_back(10);
    dl1.push_back(20);
    dl1.push_back(30);

    // Inserting element at the front
    dl1.push_front(5);
    dl1.push_front(1);
    cout<<"Elements of the list are: ";
    for(auto it=dl1.begin(); it!=dl1.end(); it++)
    {
        cout<<*it<<" ";
    }    

    // or using range based for loop
    cout<<"\nElements of the list using range based for loop are: ";
    for(int i: dl1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;   

}