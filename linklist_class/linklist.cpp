#include<iostream>
using namespace std;
class linkedlist
{
    
    struct node
    {
        int roll;
        char name [30];
        float percent;
        node* link;
    }*start;
    public:
    // linkedlist(): start(nullptr){ }
    void create();
    void display();
};
void linkedlist::create()
{
    node *temp,*tail;
    int n;
    cout<<"how many student details: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=new node ;
        cout<<"enter roll no of student:"<<i+1<<endl;
        cin>>temp->roll;
        cout<<"enter name of "<<i+1<<"st student"<<endl;
        cin>>temp->name;
        cout<<"enter the persentage of"<<i+1<< "student"<<endl;;
        cin>>temp->percent;
        // temp>>link=null;
        if (start == NULL)
        {
            start=tail=temp;
            tail=temp;
        }
    }
}
void linkedlist::display()
{
    node *temp=start;
    // temp=start;
    if (start==NULL)
    cout<<"linked list is empty";
    else
    {
        while (temp!=NULL)
        {
            cout<<temp->roll<<"\t"<<temp->name<<"\t"<<temp->percent<<endl;
            temp=temp->link;
        }
    }
}
int main()
{
    int choice;
    linkedlist list;
    do
    {
        cout<<"\n1.to creat a linked list";
        cout<<"\n2.to display linked list";
        cout<<"\n3.exit";
        cout<<"\n enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
            list.create();
            break;
            case 2:
            // system("CLS");
            cout<<"roll no:"<<"\t"<<"name"<<"\t"<<"percentage"<<endl;
            list.display();
            case 3:
            exit(0);
            default:
            cout<<"\nwrong choice";
        }
        char c;
        cout<<"do u want to continue......(y/n)";
        cin>>c;
        if (c=='n')
            return 0;
        
    } while (1);
    
}