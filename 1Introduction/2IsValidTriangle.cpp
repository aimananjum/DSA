#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0)
    cout<<"+ve";
    else if(n<0)
    cout<<"-ve";
    else
    cout<<"0";
   
    int a,b,c;
    cout<<"enter 3 sides of traingle ";
    cin>>a>>b>>c;
    if(a+b>c || b+c>a || a+c>b){
        cout<<"valid traingle";
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}