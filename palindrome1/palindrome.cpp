#include<iostream>
using namespace std;
class number
{
    private:
        unsigned short int num;
        bool input();
        public:
        void display();
};
void number::display()
{
    if (input())
        cout<<num<<" is palindrome"<<endl;
    else
    cout<<num<<" is not a palindrome"<<endl;
}
bool number::input()
{
    int rev,r,t;
    cout<<"enter the no: ";
    cin>>num;
    t=num;
    while(t>0)
    {
        r=t%10;
        rev = rev*10+r;
        t/=10;
    }
    if (rev==num)
    return 1;
    else
    return 0;
}
int main()
{
    number x;
    x.display();
}