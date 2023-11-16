#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> p;
    p.push(2);
    p.push(5);
    p.push(8);
    p.push(6);
    p.push(19);
    p.push(16);
    while (!p.empty())
    {
        cout << p.front() << " ";
        p.pop(); //We have to delete the first elemnet of the queue every time 
    }
    cout << endl;

    return 0;
}