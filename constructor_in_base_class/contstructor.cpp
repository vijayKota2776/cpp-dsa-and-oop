#include<iostream>
using namespace std;
class base1
{
    int a;
    protected :
        int get_a()
        {
            return a;
        }
        public:
            base1(int i){
                a=i;
                cout<<"a: "<<a<<endl;
            }
};
class base2
{
    int b;
    public:
        base2(int j){
            b=j;
            cout<<"b: "<<b<<endl;
        }
        int get_b()
        {
            return b;
        }
};
class derived:public base1,protected base2
{
    int z;
    void show(){
        cout<<"z: "<<z;
    }
    public:
        derived(int p, int q): base1(p),base2(q){
            z=get_a()*get_b();
            show();
        }
};
int main()
{
    derived s(10,10);
}