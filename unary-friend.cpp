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
        friend void operator -(space &);
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

void operator -(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}

int main()
{
    space s;
    s.getdata(20,30,40);
    operator -(s);
    s.display();
    return 0;

}