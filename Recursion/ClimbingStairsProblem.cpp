class Solution {
public:
    //recursive time-O(2^n)     space-O(1)
    int countWays(int n,int i){
        if(i==n) return 1;
        if(i>n) return 0;
        int x=countWays(n,i+1);
        int y=countWays(n,i+2);
        return x+y;
    }
    int climbStairs(int n) {
        return countWays(n,0);
    }
    
    //dp    time-O(n)   space-O(n)      stackSpace-Height of tree(n)
    int countWays(int n,int i,vector<int> &dp){
        if(i==n) return 1;
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        int x=countWays(n,i+1,dp);
        int y=countWays(n,i+2,dp);
        return dp[i]=x+y;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return countWays(n,0,dp);
    }
    
    //for loop  time-O(n)   space-O(n)      stackSpace-Height of tree(1)
    int climbStairs(int n) {
        vector<int> dp(n+2);
        dp[n+1] = 0;
        dp[n]=1;
        if(n==0 || n==1) return 1;
        for(int i=n-1;i>=0;i--){
            dp[i]=dp[i+1]+dp[i+2];
        }
        return dp[0];
    }
    
    //contant space time-O(n)   space-O(1)      stackSpace-Height of tree(1)
    int climbStairs(int n) {
        int a=0;
        int b=1;
        int ans;
        if(n==0 || n==1) return 1;
        for(int i=n-1;i>=0;i--){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};
