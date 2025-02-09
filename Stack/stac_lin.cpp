#include<iostream>
using namespace std;

class stac
{
    struct node
    {
        int value;
        node* next;
        node* prev;
    } *top, *bottom;

    public:
    stac() { top = bottom = NULL; } 
    void push();
    void pop();
    void display();
};

void stac::push()
{
    node* temp = new node; 
    cout << "Enter value: ";
    cin >> temp->value;
    temp->next = NULL;
    temp->prev = NULL;

    if (top == NULL)
    {
        top = bottom = temp;
    }
    else
    {
        top->next = temp;
        temp->prev = top;
        top = temp;
    }
}

void stac::pop()
{
    if (top == NULL)
    {
        cout << "\nThe stack is empty!!" << endl;
    }
    else
    {
        node* temp = top;
        cout << "\nPopped value: " << top->value << endl;
        top = top->prev;
        if (top == NULL)
            bottom = NULL; 
        delete temp;
    }
}

void stac::display()
{
    if (top == NULL)
    {
        cout << "\nThe stack is empty!!" << endl;
    }
    else
    {
        node* temp = top;
        cout << "\nThe content of the stack is: ";
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->prev; 
        }
        cout << endl;
    }
}

int main()
{
    stac o;
    while (1)
    {
        short int n;
        cout << "\n1. Push\n2. Pop\n3. Display\nYour choice: ";
        cin >> n;

        switch (n)
        {
            case 1:
                o.push();
                break;
            case 2:
                o.pop();
                break;
            case 3:
                o.display();
                break;
            default:
                cout << "Invalid choice!!" << endl;
        }

        char c;
        cout << "\nDo you want to continue (y/n)? ";
        cin >> c;
        if (c == 'y' || c == 'Y')
            continue;
        else
            exit(0);
    }
}