#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	protected:
		char name[23];
		int no;
		public:
			void get()
			{
				cout<<"enter name and number"<<endl;
				cin>>name>>no;
			}
};
class deri1:public student
{
	protected:
		int s1,s2;
		public:
			void get1()
			{
		cout<<"enter subject marks";
		cin>>s1>>s2;
			}
};
class deri2:public deri1
{
	private:
		int per;
		public:
			void cal()
			{
				per=(s1+s2)/2;
				cout<<"the per is"<<per;
			}
			
};
main()
{
	deri2 d;
	d.get();
	d.get1();
	d.cal();
	getch();
}
