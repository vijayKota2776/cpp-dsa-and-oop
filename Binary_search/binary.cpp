#include <iostream>
using namespace std;

class binary {
    short int list[30];
    short unsigned int n;

    void search();  

public:
    binary();  
};

binary::binary() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n > 30) {
        cout << "Array size exceeds the limit of 30.";
        return;
    }

    cout << "Enter elements in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    search(); 
}

void binary::search() {
    int num, lb, ub, mid;
    bool found = false;

    cout << "Enter the number to be searched: ";
    cin >> num;

    lb = 0;
    ub = n - 1;

    while (lb <= ub) {
        mid = (lb + ub) / 2;

        if (list[mid] == num) {
            found = true;
            cout << "Element found at position: " << mid;
            break;
        }

        if (list[mid] < num) {
            lb = mid + 1;
        } else {
            ub = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }
}

int main() {
    binary obj;  
    return 0;
}