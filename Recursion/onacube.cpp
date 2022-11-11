#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int sx,sy,sz;

float travelledDistance(int x,int y,int z){
	float dis=0.0;
	if(sz==z && (sx==x || sy==y) && sz!=0){//face has nnot changed 
		if(x!=sx){
			dis=(2*3.14*abs(sx-x))/6.0;
		}
		else{
			dis=(2*3.14*abs(sy-y))/6.0;
		}
	}
	else{
		dis=int(sqrt(pow(sx-x,2)+pow(sy-y,2))+abs(z-sz));
	}
	sx=x;
	sy=y;
	sz=z;
return dis;
}

int main(){

	int n;
	float sum=0.0;
	cin>>n;
	n=(n*3)+1;
	int a[n];

	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	sx=a[1];
	sy=a[2];
	sz=a[3];

	for(int i=4;i<n;i=i+3){
		sum+=travelledDistance(a[i],a[i+1],a[i+2]);
	}
	cout<<sum;
	// for(int i=1;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
return 0;
}