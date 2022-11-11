//Name : Jamadar Aiman Roll No : 35
// C++ program to demonstrate various function string class 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cout<<"Input the string\n";
  getline(cin,str);
  cout<<"\nString entered is :"<<str;
  int len = str.length();
  cout<<"\nLength of the string str is :"<<len;
  string str1 = "aiman jamadar";
  if(str.compare(str1) == 0)
    {
         cout<<"\nTwo strings are equal\n";
    }
  else
   {
        cout<<"\nTwo strings are not equal\n";
    }
  str1.append("@gmail.com");
  cout<<"\nNew str1 : "<<str1;
  str.clear();
  cout<<"\n\nstr new length : "<<str.length();//length zero
  return 0;
 
}