#include<iostream>
using namespace std;
class smaller
{
    private:
        double d1,d2,d3;
        void process();
    public:
        smaller(double a,double b,double c);
};
smaller::smaller(double a,double b,double c)
{
    d1=a;
    d2=b;
    d3=c;
    process();
}
void smaller::process()
{
    if (d1<d2&&d1<d3)
    cout<<d1<<" is the smallest"<<endl;
    else if (d2<d1&&d2<d3)
    cout<<d2<<" is the smallest"<<endl;
    else
    cout<<d3<<" is the smallest"<<endl;
}
int main()
{
    double x,y,z;
    cout<<"enter the vale: ";
    cin>>x>>y>>z;
    smaller(x,y,z);
}