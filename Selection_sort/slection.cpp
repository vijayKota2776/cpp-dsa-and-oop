#include<iostream>
using namespace std;
class select
{
    short int a[30];
    short unsigned int N;
    void sort();
    void show();
    public:
        select();
};
select::select()
{
    cout<<"enter the number of elements in array: ";
    cin>>N;
    cout<<"enter "<<N<<" element: ";
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort();
    show();
}
void select::sort()
{
    int i,index,min,temp;
    for(i=0;i<N;i++){
        index=i;
        min=a[i];
        for(int j=i+1;j<N;j++){
            if (min>a[j]){
                min=a[j];
                index=j;
            }
    }
    temp=a[index];
    a[index]=a[i];
    a[i]=temp;
    }
}
void select::show()
{
    cout<<"the sorted array is: ";
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    select s;
}