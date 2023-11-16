#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);
    p.push(6);
    p.push(7);
    p.push(8);
    p.push(9);
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
    return 0;
}