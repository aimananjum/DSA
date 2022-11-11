#include<iostream>							//1 2 3    1 3 2    	1+2+3 3+6+3 2+4+3   6 12 9
using namespace std;						//1 2 1    1 3 2	=
											//1 1 2	   1 1 1	
int main(){
	int a[3][3]={{1,2,3},{1,2,1},{1,1,2}};
	int b[3][3]={{1,3,2},{1,3,2},{1,1,1}};
	int r1=3,r2=3,c1=3,c2=3,i,j,k;
	int ans[3][3];
	if(c2 != r1){
		cout<<"Multiplication not possible \n";
		return 0;
	}
	else{
		cout<<"First Matrix\n";
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\nSecond Matrix \n";
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				ans[i][j]=0;
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++){
					ans[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		cout<<"Multiplication of Matrix is :\n";
		for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
		}
	}	
	return 0;
}