#include<iostream>
using namespace std;

class student{
	int rollno;
	int marks[5];
	int total;
	public:
		void getdata()
		{
			cout<<"Enter a roll no --> ";
			cin>>rollno;
			for(int i=0;i<5;i++)
			{
				cout<<"Enter a marks --> ";
				cin>>marks[i];
			}
		}
		int calc()
		{
			total=0;
			for(int i=0;i<5;i++)
			{
				total += marks[i];
			}
			return total;
		}
		void display()
		{
			cout<<"Roll No --> "<<rollno;
			cout<<"Marks of 5 subjects ";
			for(int i=0;i<5;i++)
			{
				cout<<marks[i];
			}
		}
};
int main()
{
	student s1;
	s1.getdata();
	int (student::*ptr)() = &student::calc;
	int res = (s1.*ptr);
	cout<<res;
	s1.display();
	return 0;
}
