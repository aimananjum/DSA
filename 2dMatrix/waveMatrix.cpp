/*
3 4
1  2  3 4
5  6  7 8
9 10 11 12
o/p: 1 5 9 10 6 2 3 7 11 12 8 4
*/
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int i=0;i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}
