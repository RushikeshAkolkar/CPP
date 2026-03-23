#include<iostream>
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
	private:
		int s1,s2;
		public:
			void get1()
			{
		cout<<"enter subject marks";
		cin>>s1>>s2;
			}
};
main()
{
	deri1 d;
	d.get();
	d.get1();
}
