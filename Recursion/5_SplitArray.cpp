class Solution {
public:
    bool isPossible(vector<int>& nums, int k,int mid){
        int partition=1;
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                partition++;
                if(partition>k || nums[i]>mid){
                    return false;
                }
                sum=nums[i];
            }
        }
        return true;
    }
    void BinarySearch(vector<int> &nums,int s,int e,int k,int &ans){
        if(s>e) return;
        int mid=s+(e-s)/2;
        if(isPossible(nums,k,mid)){
                ans=mid;
                //e=mid-1;
                return BinarySearch(nums,s,mid-1,k,ans);
        }
        else{
            //s=mid+1;
            return BinarySearch(nums,mid+1,e,k,ans);
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int s=0,sum=0,ans=0;
        for(auto a : nums){
            sum+=a;
        }
        int e=sum;
        if(k==1)return sum;
        int n=nums.size();
        if(k==n-1){
            sum=0;
            for(auto a:nums){
                sum=max(sum,a);
            }
            return sum;
        }
        BinarySearch(nums,0,e,k,ans);
    
        return ans;
    }
};
