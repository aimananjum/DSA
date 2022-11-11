#include <iostream>
using namespace std;

bool issafe(int** a,int x,int y,int n){
	if(x<n && y<n && a[x][y]==1){
		return true;
	}
	return false;
}

bool ratinMaze(int** a,int x,int y,int n,int** solArr){
	if(x==n-1 && y==n-1){
		solArr[x][y]=1;
		return true;
	}

	if(issafe(a,x,y,n)){
		solArr[x][y]=1;
		if(ratinMaze(a,x+1,y,n,solArr)){
			return true;
		}
		if(ratinMaze(a,x,y+1,n,solArr)){
			return true;
		}
		solArr[x][y]=0;
		return false;
	}
	return false;
}

int main(){
	int n;
	cin>>n;

	int** a = new int*[n];
	for(int i=0;i<n;i++){
		a[i]=new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	int** solArr = new int*[n];
	for(int i=0;i<n;i++){
		solArr[i]=new int[n];
		for(int j=0;j<n;j++){
			solArr[i][j]=0;
		}
	}
	cout<<endl;
	if(ratinMaze(a,0,0,n,solArr)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<solArr[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1