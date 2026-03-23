#include<iostream>
using namespace std;
typedef class student
{
	protected:
		int no;
		public:
			void get()
			{
				cout<<"enter the student roll no"<<endl;
			}
}s;
typedef class ap:public student
{
	
	void get1()
	{
	cin>>no;
	}
}ap;
main()
{
	ap p;
	p.get();
}
