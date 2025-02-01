#include<iostream>
using namespace std;
class volume
{
    float r,r1,h;
    float v;
    public:
        volume (int R);
        volume(int R, int H);
        void display();
};
volume::volume(int R)
{
    r=R;
    v=(4.00/3.00)*3.14*r*r*r;
}
volume::volume(int R,int H)
{
    r1=R;
    R=H;
    v=3.14*r1*r1*H;
}
void volume::display()
{
    cout<<v;
}
int main()
{
    int r,r1,h;
    cout<<endl<<"enter radius to find volume of sphere: ";
    cin>>r;
    cout<<endl<<"enter radius and height  to find volume of cylinder: ";
    cin>>r1>>h;
    volume v1(r);
    volume v2(r1,h);
    cout<<endl<<"volume of sphere is ",v1.display();
    cout<<endl<<"volume of cylinder is ",v2.display();
}