#include<iostream>
using namespace std;
class fibo
{
    private:
    unsigned short int n;
    int input ();
    public:
    void display();
};
void fibo::display()
{
    input();
    int x,y,z,i;
    for (x=0,y=1,i=1;i<=n;i++)
    {
        cout<<x<<" ";
        z=x+y;
        x=y;
        y=z;
    }
}
int fibo::input()
{
    cout<<"enter the no of tearm: ";
    cin>>n;
    return 0;
}
int main()
{
    fibo n;
    n.display();
}