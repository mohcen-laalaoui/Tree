#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> p;
    p.push_front(15.5);
    p.push_front(13);
    p.push_back(12);
    p.push_back(10);
    p.push_front(16);
    p.push_front(23);
    p.push_back(52);
    p.push_back(20);
    // Print the elements of the doubly linked list
    for (auto a : p)
    {
        cout << a << " ";
    }
    cout << endl;

    p.pop_front();
    p.pop_back();
    for (auto a : p)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
