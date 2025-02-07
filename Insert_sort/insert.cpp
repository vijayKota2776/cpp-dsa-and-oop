#include<iostream>
using namespace std;
class insert
{
    short int list[30];
    short unsigned int N;
    void sort();
    void show();
    public:
        insert();
};
insert::insert()
{
    cout<<"enter the number of element in array: ";
    cin>>N;
    cout<<"enter "<<N<<" element: ";
    for (int i=0;i<N;i++)
    cin>>list[i];
    sort();
    show();
}
void insert::sort()
{
    int key,i,j;
    for(i=1;i<N;i++){
        key=list[i];
        for(j=i-1;j>=0&&key<=list[j];j--){
            list[j+1]=list[j];
        }
        list [j+1]=key;
    }
}
void insert::show()
{
    cout<<"the contents of array: ";
    for(int i=0;i<N;i++)
    cout<<list[i]<<" ";
}
int main()
{
    insert s;
}