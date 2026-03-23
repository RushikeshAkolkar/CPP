#include<iostream>
#include<iomanip>
using namespace std;
class pcons
{

	int a=1;
	int sum=0; 
	public:
pcons(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	sum+=a*a;
	a++;
	}
	cout<<"sum="<<sum;
	char c=cin.get();
}
};
int main()
{	int n=3;
	pcons p(n);
	return 0;
}
