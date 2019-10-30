#include<iostream>
using namespace std;
class student
{
    char name[20];
    int age,no;
    public:
    void getdata()
    {
    cout<<"enter no :";
    cin>>no;
    cout<<"enter name :";
    cin>>name;
    cout<<"enter age :";
    cin>>age;
    }

    void print()
    {
        cout.width(10);
        cout<<no;
        cout.width(10);
        cout<<name;
        cout.width(10);
        cout<<age;
        cout<<"\n";
    }
};

int main()
{
    student e[10];
    int n,i;
    cout<<"\n";
    cout<<"______________________________________________________________________\n";
    cout<<"enter n::::";
    cin>>n;
    cout<<"______________________________________________________________________\n";
    for(i=0;i<n;i++)
    {
        e[i].getdata();
    }
    cout<<"______________________________________________________________________\n";
    cout.width(10);
    cout<<"NO.";
    cout.width(10);
    cout<<"NAME";
    cout.width(10);
    cout<<"age";
    cout<<"\n";
    for(i=0;i<n;i++)
    {   
        e[i].print();
    }
    cout<<"______________________________________________________________________\n";
    cout<<"______________________________________________________________________\n";
    return 0;
}