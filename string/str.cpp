#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
// // int main(){
// // 	int t,j=0;
// // 	cin>>t;
// // 	while(j<t){
// // 		int n,k;
// // 		int s=0;
// // 		cin>>n;
// // 		cin>>k;
// // 		int a[n];
// // 		for(int i=0;i<n;i++){
// // 			cin>>a[i];
// // 		}
// // 		for(int i=0;i<n;i++){
// // 			s=s+a[i];
// // 		}
// // 		int temp=s;
// // 		temp=temp%k;//--->3
// // 		s=s/k;//--->4
// // 		int b[k]={0};
// // 		for(int p=0;p<k;p++){
// // 			b[p]=s;
// // 		}
// // 		for(int q=0;q<temp;q++){
// // 			b[q]+=1;
// // 		}
// // 		for(int t=0;t<k;t++){
// // 			b[t]*=b[t];
// // 		}
// // 		int ans=0;
// // 		for(int i=0;i<k;i++){
// // 			ans+=b[i];
// // 		}
// // 		cout<<ans;
// // 		j++;
// // 	}
// // 	return 0;
// // }

// int main(){
// 	int n,c=0;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n-1;i++){
// 		if(a[i]==i){
// 			swap(a[i],a[i+1]);
// 			c++;
// 		}
// 	}
// 	cout<<c;
// }


int main() {

   
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        sort(A,A+N);
        cout<<A[0]<<A[1]<<A[2];
        
    
    return 0;
}