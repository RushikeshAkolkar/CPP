#include<iostream>
#include<conio.h>
using namespace std;
typedef class add
{
		int n;
		public:
			void re()
			{
				cout<<"enter the values of n";
				cin>>n;
			}
			add operator + (add a2)
			{
				add a3;
				a3.n=n+a2.n;
				
			}
			void disp()
			{
				cout<<"result=="<<n<<endl;
			}
}no;
main()
{
	no a1,a2,a3;
	a1.re();
	a2.re();
	a3=a1+a2;
	a3.disp();
	getch();
}
