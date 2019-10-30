#include<iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
        void getdata(int a,int b,int c);
        void display();
        void operator -();
};

void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}

void space::display(void)
{
    cout<<"\nx="<<x;
      cout<<"\ny="<<y;
      cout<<"\nz="<<z;
}

void space::operator -()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    space s;
    s.getdata(20,30,40);
    s.operator -();
    s.display();
    return 0;
}