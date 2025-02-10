#include <iostream>
using namespace std;
class Queue {
    struct Node {
        char name[30];
        Node* link;
    } *rear, *front;
public:
    Queue() {
        front = rear = nullptr;
    }
    void append();
    void deleteNode();
    void display();
};
void Queue::append() {
    Node* temp = new Node;
    cout << "Enter a name: ";
    cin >> temp->name;
    temp->link = nullptr;
    if (front == nullptr) {
        front = rear = temp;
    } else {
        rear->link = temp;
        rear = temp;
    }
}
void Queue::deleteNode() {
    if (front == nullptr) {
        cout << "The queue is empty!\n";
    } else {
        Node* temp = front;
        front = front->link;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
        cout << "Deleted front node. Updated queue:\n";
        display();
    }
}
void Queue::display() {
    if (front == nullptr) {
        cout << "\nThe queue is empty!\n\n";
    } else {
        Node* temp = front;
        cout << "\nThe contents in the queue: ";
        while (temp != nullptr) {
            cout << temp->name;
            if (temp->link != nullptr) {
                cout << " -> ";
            }
            temp = temp->link;
        }
        cout << endl;
    }
}
int main() {
    Queue obj;
    while (1) {
        short int n;
        cout << "\n1. Append" << endl
             << "2. Delete" << endl
             << "3. Display" << endl
             << "4. Exit" << endl;
        cout << "Your choice: ";
        cin >> n;
        switch (n) {
            case 1:
                system("cls"); 
                obj.append();
                break;
            case 2:
                system("cls");
                obj.deleteNode();
                break;
            case 3:
                system("cls");
                obj.display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice!\n";
                break;
        }
        char c;
        cout << "\nDo you want to continue? (y/n): ";
        cin >> c;
        if (c == 'y' || c == 'Y') {
            continue;
        } else {
            exit(0);
        }
    }
}