#include<iostream>
using namespace std;
class test;
class result;
class student
{
    protected:
        int r_no;
    public:
        void getdata(int);
        void put_no(void);
};

void student::getdata(int a)
{
    r_no=a;
}

void student::put_no(void)
{
    cout<<"roll no:"<<r_no;
}

//-------------------------------------------------

class test:public student
{
    protected:
        float s1;
        float s2;
    public:
        void get_mark(float,float);
        void put_mark(void);
};

void test::get_mark(float x,float y)
{
    s1=x;
    s2=y;
}

void test::put_mark()
{
    cout<<"mark in s1:"<<s1<<"\n";
    cout<<"mark in s2:"<<s2<<"\n";
}

//-------------------------------------------------

class result:public test
{
    float tot;
    public:
    void display(void);
};

void result::display(void)
{
    tot=s1+s1;
    put_no();
    put_mark();
    cout<<"totle="<<tot<<"\n";
}

//===============================================================================

int main()
{
    result std1;
    std1.getdata(111);
    std1.get_mark(75.0,59.5);
    std1.display();
    return 0;
}