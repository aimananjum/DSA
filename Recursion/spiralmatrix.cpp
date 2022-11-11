#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;



int main(){
	int In,q;
	cin>>In>>q;
	float tp=0.0;
	int a[5]={0,101,102,103,104};
	int p[5]={0,42,50,500,40};
	int s[5]={0,10,20,15,16};
	if(In==101 || In==102 || In==103 || In==104){
		In=In-100;
		if(q<=s[In]){
			tp=q*p[In];
			s[In]-=q;
		}
		if(tp!=0)
		cout<<fixed<<setprecision(1)<<tp<<" INR"<<endl;
		else
			cout<<"NO STOCK"<<endl;
		cout<<s[In]<<" LEFT"<<endl;
	}
return 0;
}

// int gcd(int a,int b){
// 	if(b==0){
// 		return a;
// 	}
// 	return gcd(b,a%b);
// }
// int main(){

// 	int n;
// 	cin>>n;

// 	int distance=10;
// 	char c='R';
// 	int x=0,y=0;

// 	while(n){
// 		switch(c){
// 			case 'R':
// 				x=x+distance;
// 				distance+=10;
// 				c='U';
// 				break;
// 			case 'U':
// 				y=y+distance;
// 				distance+=10;
// 				c='L';
// 				break;
// 			case 'L':
// 				x=x-distance;
// 				distance+=10;
// 				c='D';
// 				break;
// 			case 'D':
// 				y=y-distance;
// 				distance+=10;
// 				c='A';
// 				break;
// 			case 'A':
// 				x=x+distance;
// 				distance+=10;
// 				c='R';
// 				break;
// 		}
// 		n--;
// 	}
// 	cout<<x<<" "<<y<<endl;



// 	//no of zero at the end;
// 	// int n=12;
// 	// cin>>n;
// 	// int res=0;
// 	// for(int i=5;i<=n;i=i*5){
// 	// 	res=res+n/i;
// 	// }
// 	// cout<<res;

// 	//stive of erotothences prim no in range 
// 	// bool a[n+1];
// 	// a[0]=0;
// 	// a[1]=0;
// 	// for(int i=2;i<=n;i++){
// 	// 	a[i]=1;
// 	// }

// 	// for(int i=2;i*i<=n;i++){
// 	// 	for(int j=2*i;j<=n;j=j+i){
// 	// 		a[j]=0;
// 	// 	}
// 	// }

// 	// for(int i=0;i<=n;i++){
// 	// 	cout<<a[i]<<" ";
// 	// 	cout<<i<<endl;
// 	// }

// 	//gcd by recursion 
// 	//cout<<gcd(60,24);
// 	return 0;
// 	}






// /*

// 1 2 3
// 4 5 6
// 7 8 9 

// */      