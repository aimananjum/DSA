#include <bits/stdc++.h> 
void subset(int i,vector<int>&v,vector<int> &temp,vector<vector<int>> &ans){
    
    if(i==v.size()){
        ans.push_back(temp);//if reached till end then push into answer
        return;
    }
    subset(i+1,v,temp,ans);//not included
    temp.push_back(v[i]);
    subset(i+1,v,temp,ans);//included
    temp.pop_back();//back tracking
    
}


vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;
    vector<int> temp;
    subset(0,v,temp,ans);
    return ans;
}
