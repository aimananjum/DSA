//Name: Jamadar Aiman Roll No:35
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\nEnter Three No. to check the greater No.\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
			cout<<"\ngreater No. is "<<a;
		else
			cout<<"\ngreater No. is "<<c;
	}
	else
	{
		if(b>c)
			cout<<"\ngreater No. is "<<b;
		else
			cout<<"\ngreater No. is "<<c;
	}
}