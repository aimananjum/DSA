//Name: Jamadar Aiman Roll No:35
#include <iostream>
using namespace std;
int sum(int a,int b){
	int c;
	c=a+b;
	cout<<"\nSum is "<<c;
	return 0;
}
int sum(float a,int b){
	float c;
	c=a+float(b);
	cout<<"\nSum is "<<c;
	return 0;
}
int sum(double a){
	double c;
	c=a+a;
	cout<<"\nSum is "<<c;
	return 0;
}
int main()
{	
	sum(25,34);//1st function is called
	sum(2.3f,4);//2nd function is called
	sum(934);//3rd function is called
	return 0;
}