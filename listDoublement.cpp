#include <iostream>
using namespace std;

// Define a doubly linked list node structure
struct list
{
    int data;
    list *next;
    list *prev;
};

// Declare global pointers for the head, tail, and temporary nodes
list *head;
list *fin;
list *p;
list *q;
int i, n, number, value;

// Function to display the elements of the list from the first to the last
void displayFirstLast(list *&head)
{
    p = head;
    if (p != nullptr)
    {
        cout << "The elements of the list from first to last are: " << endl;
        while (p != nullptr)
        {
            cout << p->data << endl;
            p = p->next;
        }
    }
}

// Function to display the elements of the list from the last to the first
void displayLastFirst(list *&fin)
{
    p = fin;

    if (p != nullptr)
    {
        cout << "The elements of the list from last to first are: " << endl;
        while (p != nullptr)
        {
            cout << p->data << endl;
            p = p->prev;
        }
    }
}

int main()
{
    // User input for the number of items in the doubly linked list
    cout << "Enter the number of items: ";
    cin >> number;

    // Initialization of pointers
    p = head;

    // Loop to create the doubly linked list
    for (i = 1; i <= number; i++)
    {
        cout << "Enter a number: ";
        cin >> value;

        // Create a new node
        q = new list();
        q->data = value;
        q->next = nullptr;

        // Update pointers to maintain the doubly linked list
        if (head != nullptr)
        {
            p->next = q;
            q->prev = p;
        }
        else
        {
            // If the list is empty, set head and fin to the new node
            head = q;
            head->prev = nullptr;
            fin = q;
        }

        // Move the pointer to the new node
        p = q;
        fin = q;
    }

    // Display the doubly linked list from first to last
    cout << "Display from first to last item: " << endl;
    displayFirstLast(head);

    // Display the doubly linked list from last to first
    cout << "Display from last to first item: " << endl;
    displayLastFirst(head);

    return 0;
}
