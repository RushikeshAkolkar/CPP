#include<iostream>
#include<conio.h>
using namespace std;
class a
{
public :
	a()
	{
		cout<<"object is created";
		 char c=	cin.get();
	}
	~a()
	{
		cout<<"\n object distroyed";
	}
};
main()
{
new class a();
new class a();
getch();	
}
