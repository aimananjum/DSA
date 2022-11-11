#include <iostream>
using namespace std;

int board[4][4];

bool issafe(int board[][],int row,int col){
	if(board[row-1][col-1]==1){
		return 0;
	}
	if(board[row-1][col]==1){
		return 0;
	}
	if(board[row+1][col+1]==1){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){

	board[4][4]={0};
	for(int i=0;i<4;i++){
	cout<<board[i][j];
	}
	return 0;
}