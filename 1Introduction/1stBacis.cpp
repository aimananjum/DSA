#include<iostream>
using namespace std;

int main(){
    int principleAmount,interest,timePeriod;
    cout<<"Enter principle, interest and time period"<<endl;
    cin>>principleAmount;
    cin>>interest;
    cin>>timePeriod;
    float SI = (principleAmount * timePeriod * interest)/100;
    cout<<"Simple Interest is: "<<SI;
    
    return 0;
}