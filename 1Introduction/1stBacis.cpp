#include<iostream>
using namespace std;

int main(){
    //SI
    int principleAmount,interest,timePeriod;
    cout<<"Enter principle, interest and time period"<<endl;
    cin>>principleAmount;
    cin>>interest;
    cin>>timePeriod;
    float SI = (principleAmount * timePeriod * interest)/100;
    cout<<"Simple Interest is: "<<SI;
    
    //a<b?
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}