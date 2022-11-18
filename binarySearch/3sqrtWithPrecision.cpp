#include <iostream>

using namespace std;
//function to calculate integer part of the number
int mySqrt(int x) {
        int s=0,e=x,ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid<=x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
}
//to calculate decimal places 
double morePrecision(int n,int precision,int temp){
    double factor = 1;
    double ans = temp;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j = ans;j*j<n;j+=factor){ //add the factor(eg=0.1) until its square is less than the given number (n)
            ans=j;
        }
    }
    return ans;
}
int main()
{   
    int n;
    cin>>n;
    
    int tempSolution = mySqrt(n);
    cout<<tempSolution<<endl;
    cout<<morePrecision(n,3,tempSolution);

    return 0;
}
