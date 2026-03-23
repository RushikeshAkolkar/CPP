#include<iostream>
using namespace std;
class negative
{
	private:
		int x,y,n;
		public:
			negative accept()
			{
				cout<<"enter the values of x & y"<<endl;
				cin>>x>>y;
			}
			negative operator + ()
			{
			n=x+y;
			}
			negative operator / ()
			{
			n=x*y;	
			}
			negative put()
			{
				cout<<"the value of x&y as follows"<<endl<<n;
			}
};
main()
{
	negative n,n1,n2,n3,n4;
	n1.accept();
	+n1;
	n1.put();
	n4.accept();
	/n4;
	n4.put();
	
}
