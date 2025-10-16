// Standard Template Library (STL) in C++ is a powerful set of C++ template classes to provide general-purpose classes and, 
// functions with templates that implement many popular and commonly used algorithms and data structures like
// vectors, lists, queues, and stacks.
// Four components of STL are Algorithms, Containers, Functions, and Iterators.

// Example of using STL vector and sort algorithm

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int n, element;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    sort(vec.begin(), vec.end());
    cout << "Sorted elements: ";
    for (const auto &el : vec)
    {
        cout << el << " ";
    }
    cout << endl;
    return 0;        

}