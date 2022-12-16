/*
Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR

*/
class Solution{
    public:
    bool isSafe(int x,int y,vector<vector<int>> &m,int n,vector<vector<int>> &visited){
        //if executes -> x & y are in range from o to n and element is not visited previously and the path is not blocked
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1) 
        return true;
        else
        return false;
    }
    void solve(vector<vector<int>> &m,int n,int x,int y,vector<string> &ans,
                vector<vector<int>> &visited,string path){
        if(x==n-1 && y==n-1) {
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        //D->L->R->U
        //move down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx,newy,m,n,visited)){
            path.push_back('D');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        //move left
        newx=x;
        newy=y-1;
        if(isSafe(newx,newy,m,n,visited)){
            path.push_back('L');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        //move right
        newx=x;
        newy=y+1;
        if(isSafe(newx,newy,m,n,visited)){
            path.push_back('R');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        //move up
        newx=x-1;
        newy=y;
        if(isSafe(newx,newy,m,n,visited)){
            path.push_back('U');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        visited[x][y]=0;//backtracking 
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0) return ans;
        vector<vector<int>> visited(n,vector<int>(n,0));//for avoiding infinite looping
        int srcx=0,srcy=0;
        string path="";
        solve(m,n,srcx,srcy,ans,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
