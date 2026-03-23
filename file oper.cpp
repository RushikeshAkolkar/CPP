#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class student
{
	protected:
		int i;
		string name;
		public:
			void getd()
			{
				cin>>i>>name;
			}

};
class s:public student
{
	public:
	void put()
			{
				cout<<i<<"	"<<name;
			}
};
main()
{
	s s[100];
	int i=0,n;
	cout<<"how many person you want"<<endl; 
	cin>>n;
	fstream myfile;
	myfile.open("xyz.txt",ios::ate);
	for(;i<n;i++)
	{
	s[i].getd();
	
	}
	for(;i<n;i++)
	{
		s[i].put();
	myfile<<put(i);
	}
	myfile.close();
	cout<<"succesufull:";
}
