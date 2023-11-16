#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> p;
    stack<int> q;
    p.push(12);
    p.push(13);
    p.push(14);
    p.push(15);
    p.push(16);
    p.push(17);
    p.push(18);
    /*Display stack items*/
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    /*while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;*/

    swap(p, q);

    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}