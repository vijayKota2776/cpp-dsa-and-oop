#include<iostream>
using namespace std;

class base {
    float num1;
    public:
        float num2;
        void input_data();
        float get_num1();
};

class derived : public base {
    float sum;
public:
    void get_data();
    void show_data();
};

void base::input_data() {
    cout << "Enter value of num1: ";
    cin >> num1;
    cout << "Enter value of num2: ";
    cin >> num2;
}

float base::get_num1() {
    return num1;
}

void derived::get_data() {
    input_data();
    sum = get_num1() + num2;

    cout << "Value of num1: " << get_num1() << endl;
    cout << "Value of num2: " << num2 << endl;
    cout << "Sum of num1 and num2: " << sum << endl;
}

void derived::show_data() {
    cout << "Displaying Data Again:" << endl;
    cout << "Value of num1: " << get_num1() << endl;
    cout << "Value of num2: " << num2 << endl;
}

int main() {
    derived d;
    d.get_data();
    d.show_data();
    return 0;
}