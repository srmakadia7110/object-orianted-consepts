#include<iostream>
using namespace std;
class student
{
        int m1,m2,m3,totle,avg,roll_no;
        char name[10];
        public:
        void getdata()
        {
            cout<<"enter student name:";
            cin>>name;
            cout<<"enter roll no:";
            cin>>roll_no;
            cout<<"enter subject 1 mark:";
            cin>>m1;
            cout<<"enter subject 2 mark:";
            cin>>m2;
            cout<<"enter subject 3 mark:";
            cin>>m3;
        }
        void print()
        {
            cout<<"\nName::"<<name;
            cout<<"\nRoll no::"<<roll_no;
        }
        void cal()
        {
            int totle,avg;
            totle=m1+m2+m3;
            cout<<"\ntotle="<<totle;
            avg=totle/3;
            cout<<"\navg="<<avg;
        }
};

int main()
{
    student s1;
    s1.getdata();
    s1.print();
    s1.cal();
    return 0;
}