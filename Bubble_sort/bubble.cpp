#include <iostream>
using namespace std;

class bubble {
    short unsigned int list[30];
    short unsigned int N;
    void sort();
    void show();
public:
    bubble();
};

bubble::bubble() {
    cout << "Enter number of elements in array: ";
    cin >> N;
    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> list[i];
    }
    sort();
    show();
}

void bubble::sort() {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void bubble::show() {
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main() {
    bubble b;
    return 0;
}