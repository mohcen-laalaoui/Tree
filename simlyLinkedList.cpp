#include <iostream>
using namespace std;

struct simlyLinkedList
{
    int data;
    simlyLinkedList *next;
};

typedef simlyLinkedList list;

list *head = nullptr;
int value;

void insert_v(list *&head, int value)
{
    list *p = new list();
    p->data = value;
    p->next = nullptr;
    head = p;
}

void insert_d(list *&head, int value)
{
    list *p = new list();
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        p->next = head;
        head = p;
        p->data = value;
    }
}

void insert_m(list *&head, int value)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        list *p = new list();
        list *q;
        int pos;
        q = head;
        cout << "Enter the position of the node you want to insert in: ";
        cin >> pos;
        while (pos != 0)
        {
            q = q->next;
            pos--;
        }
        p->next = q->next;
        q->next = p;
        p->data = value;
    }
}

void insert_f(list *&head, int value)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        list *p = new list();
        list *a;
        a = head;
        while (a->next != nullptr)
        {
            a = a->next;
        }
        a->next = p;
        p->next = nullptr;
        p->data = value;
    }
}

void del_d(list *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        list *d;
        d = head;
        head = head->next;
        delete (d);
        d = nullptr;
    }
}

void del_btw(list *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        int pos;
        list *ptr1, *ptr2;
        ptr1 = head;
        cout << "Enter the position of the node you want to delete: ";
        cin >> pos;
        while (pos != 0)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
            pos--;
        }
        ptr2->next = ptr1->next;
        delete (ptr1);
        ptr1 = nullptr;
    }
}

void del_f(list *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        list *s;
        list *v;
        s = head;
        while (s->next != nullptr)
        {
            v = s;
            s = s->next;
        }
        v->next = nullptr;
        delete (s);
        s = nullptr;
    }
}

void disp(list *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        list *z;
        z = head;
        while (z != nullptr)
        {
            cout << z->data << " ";
            z = z->next;
        }
    }
}

int main()
{
    insert_v(head, 5);
    insert_d(head, 10);
    insert_d(head, 20);
    insert_d(head, 30);
    insert_d(head, 40);
    insert_m(head, 15);
    insert_m(head, 25);
    insert_m(head, 35);
    insert_m(head, 45);
    insert_m(head, 55);
    insert_f(head, 16);
    insert_f(head, 26);
    insert_f(head, 36);
    insert_f(head, 46);
    disp(head);
    del_d(head);
    del_btw(head);
    del_f(head);
    disp(head);
    return 0;
}