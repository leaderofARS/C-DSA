// C++ program to demonstrate the use of STL vector and sort algorithm with Iterators

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec = { 10, 20, 5, 23, 42, 15 };
    vector<int>::iterator it;
    sort(vec.begin(), vec.end());
    for( it = vec.begin(); it != vec.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}