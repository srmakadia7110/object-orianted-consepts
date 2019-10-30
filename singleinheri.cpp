#include<iostream>
using namespace std;

class B
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class D:public B
{
    int c;
    public:
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    cout<<"enter value of a & b ::";
    cin>>a>>b;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout<<"a="<<a;
}

void D::mul()
{
    c=b*get_a();
}

void D::display()
{
    cout<<"a="<<get_a()<<"\n";
    cout<<"b="<<b<<"\n";
    cout<<"c="<<c<<"\n";
}


int main()
{
    D d;
    d.get_ab();
    d.show_a();
    d.mul();
    d.display();
    d.b=20;
    d.mul();
    d.display();
    return 0;
}