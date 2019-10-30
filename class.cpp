#include<iostream>
using namespace std;
class test
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"enter x::";
        cin>>x;
        cout<<"enter y::";
        cin>>y;
    }
    void cal()
    {
        int d;
        d=x+y;
        cout<<"ans is :::"<<d;
    }
};

int main()
{
    test x1;
    x1.getdata();
    x1.cal();
    return 0;
}