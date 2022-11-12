class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x,ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid<=x){//finding the smallest possible element
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
