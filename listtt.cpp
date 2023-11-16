#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> p;
    p.push_front(5);
    p.push_front(10);
    p.push_front(20);

    // Print the elemnts of the list
    for (const auto &element : p)
    {
        cout << element << " ";
    }
    cout << endl;

    auto a = p.begin();

    // add an element after the first element
    p.insert_after(a, 9);
    a++;
    p.insert_after(a, 6);

    // print again
    for (const auto &element : p)
    {
        cout << element << " ";
    }
    cout << endl;

    // Erase the second elemnt (number two in the list) in the list using erase_after()
    a = p.begin();
    a++;
    p.erase_after(a);

    for (const auto &element : p)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}