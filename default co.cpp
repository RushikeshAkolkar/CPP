#include<iostream>
#include<iomanip>
using namespace std;
class a
{
	char c;
	public :
	a();
};
a::a()
	{
		cout<<"form default constructor";
		c=cin.get();
	}
main()
{
	a h;
}
