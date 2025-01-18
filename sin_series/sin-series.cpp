#include <iostream>
#include <cmath>
using namespace std;

class series {
private:
    unsigned short int n;
    float d; 
    void process();

public:
    void get_data();
};

void series::process() {
    d = d * 3.14 / 180;
    float sum = 0;
    float term;

    for (int i = 0; i < n; i++) { 
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        term = pow(d, i) / fact; 
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }

    cout << "Value calculated by process: " << sum << endl;
    cout << "Value calculated by built-in function: " << sin(angle) << endl;

void series::get_data() {
    cout << "No of terms: ";
    cin >> n;
    cout << "Enter degree of angle: ";
    cin >> angle;
    process();
}

int main() {
    series s;
    s.get_data();
    return 0;
}