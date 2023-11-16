#include <iostream>
using namespace std;

struct list
{
    int data;
    list *next;
    list *prev;
};

list *head;
list *fin;
list *p;
list *q;
int i, n, number, value;

void displayFirstLast(list *&head)
{
    p = head;
    if (p != nullptr)
    {
        cout << " The elements of the list are: " << endl;
        while (p != nullptr)
        {
            cout << p->data << endl;
            p = p->next;
        }
    }
}

void displayLastFirst(list *&fin)
{
    p = fin;

    if (p != nullptr)
    {
        cout << " The elements of the list are: " << endl;
        while (p != nullptr)
        {
            cout << p->data << endl;
            p = p->prev;
        }
    }
}

int main()
{
    cout << "Give a number: ";
    cin >> number;
    cout << "Creation of the doubly linked list which contains " << number << " items: " << endl;
    p = head;
    for (i = 1; i <= number; i++)
    {
        cout << "Give a number: " << endl;
        cin >> value;
        q = new list();
        q->data = value;
        q->next = nullptr;
        if (head != nullptr)
        {
            p->next = q;
            q->prev = p;
        }
        else
        {
            head = q;
            head->prev = nullptr;
            fin = q;
        }
        p = q;
        fin = q;
    }
    cout << "Display from first to last item: " << endl;
    displayFirstLast(head);
    cout << "Display from last to first item: " << endl;
    displayLastFirst(head);
    return 0;
}
