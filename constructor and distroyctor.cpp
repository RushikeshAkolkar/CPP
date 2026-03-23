#include<iostream>
#include<iomanip>
using namespace std;
class fra
{
	int a,b;
	char ch[20];
	public:
		fra();
		fra(int p,int q);
		~fra();
};
fra::fra()
{
	cout<<"\ndefult constructor";
}
fra::fra(int p,int q)
{
	cout<<"\nparameterzied constructor\n"<<p<<endl<<q;
}
fra::~fra()
		{
			cout<<"\n object automatically distrocted";
		}
main()
{
fra f,f1(20,30);
char c=cin.get();
}
