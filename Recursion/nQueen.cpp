#include <iostream>
using namespace std;

bool issafe(int** a,int x,int y,int n){
	int r=0;
	for(r=0;r<x;r++){
		if(a[r][y]==1){
			return false;
		}
	}
	r=x;
	int c=y;
	while(r>=0 && c>=0){
		if(a[r][c]==1){
			return false;
		}
		r--;
		c--;
	}
	r=x;
	c=y;
	while(r>=0 && c<n){
		if(a[r][c]==1){
			return false;
		}
		r--;
		c++;
	}
	return true;
}

bool nQueen(int** a,int x,int n){
	if(x>=n){
		return true;
	}
	for(int col=0;col<n;col++){
		if(issafe(a,x,col,n)){
			a[x][col]=1;

			if(nQueen(a,x+1,n)){
				return true;
			}
			a[x][col]=0;
		}
	}
	return false;

}

int main()
{	int n;
	cin>>n;

	int** a=new int*[n];
	for(int i=0;i<n;i++){
		a[i] =new int[n];
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}

	if(nQueen(a,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<"  ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}