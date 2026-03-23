#include<iostream>
using namespace std;
main()
{
	static int a;
	int n;
	int &b=a;
	cout<<"enter n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b++;
	}
	cout<<"value of b="<<b<<"value of a="<<a;
	int k;
	cin>>k;
}
