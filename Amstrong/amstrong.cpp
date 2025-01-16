#include<iostream>
#include<math.h>
using namespace std;
class armostrong
{
    private:
        unsigned short int num;
        void process();
    public:
        void get_no();
};
void armostrong::process()
{
    int r,sum=0,t;
    t=num;
    while(t>0)
    {
        r=t%10;
        sum+=pow(r,3);
        t/=10;
    }
    if (sum == num)
    cout<<num<<" the number is not an armostrong number";
    else
    cout<<num<<" the number is  an armostrong number";
}
void armostrong::get_no()
{
    cout<<"enter three digit number: ";
    cin>>num;
    process();
}
int main()
{
    armostrong num;
    num.get_no();
}

// with n no of digits
#include <iostream>
#include <cmath>
using namespace std;

class armostrong {
private:
    unsigned short int num;
    void process();
public:
    void get_no();
};

void armostrong::process() {
    int r, sum = 0, t;
    int digits = 0;
    t = num;
    while (t > 0) {
        digits++;
        t /= 10;
    }
    t = num;
    while (t > 0) {
        r = t % 10;
        sum += pow(r, digits);
        t /= 10;
    }
    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
}

void armostrong::get_no() {
    cout << "Enter a three-digit number: ";
    cin >> num;
    process();
}

int main() {
    armostrong num;
    num.get_no();
    return 0;
}