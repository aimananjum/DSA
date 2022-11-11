//Name: Jamadar Aiman Roll No:35 
#include <iostream>
using namespace std;
int main()
{
	int ch=1;
	while(ch)
	{	
		int a,b,c;
		cout<<"1-add\n2-sub\n3-mul\n4-div\n5-mode\n6-Exit\n";
		cout<<"\nEnter your choice\n";
		cin>>c;
		cout<<"\nEnter Two No.\n";
		cin>>a>>b;
			switch(c)
			{
				case 1:c=a+b;
						break;

				case 2:c=a-b;
						break;
				case 3:c=a*b;
						break;
				case 4:c=a/b;
						break;
				case 5:c=a%b;
						break;
				case 6:exit(0);
				
				default:cout<<"\nInvalid Choice  !\n";
			}
		cout<<"\nResult is = "<<c;
		cout<<"\nEnter 1 for continue and 0 for exit\n";
		cin>>ch;
	}
	return 0;
}