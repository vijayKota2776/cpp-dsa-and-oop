#include<iostream>
using namespace std;
class prime 
{
    private:
        unsigned short int num;
        void get_no();
    public:
        void process();
};
void prime::process()
{
    int flog =0,i;
    get_no();
    for(i=2;i<num;i++)
    {
        if (num%i==0)
        {
            flog=1;
            break;
        }
    }
    if (flog ==1)
    cout<<num<<" is composite";
    else
    cout<<num<<" is prime";
}
void prime::get_no()
{
    cout<<"enter a number";
    cin>>num;
}
int main()
{
    prime num;
    num.process();
}