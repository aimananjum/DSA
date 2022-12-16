class Solution {
public:
    int upperBoundBinarySearch(vector<int>& nums,int s,int e, int target,int &ans2){
        if(s>e) return ans2;
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            ans2=mid;//store ans and find if there is more target elements on right half
            return upperBoundBinarySearch(nums,mid+1,e,target,ans2);
        }
        else if(nums[mid]>target)
            return upperBoundBinarySearch(nums,s,mid-1,target,ans2);
        else
            return upperBoundBinarySearch(nums,mid+1,e,target,ans2);
    }
    int lowerBoundBinarySearch(vector<int>& nums,int s,int e, int target,int &ans1){
        if(s>e) return ans1;
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            ans1=mid;//store ans and find if there is more target elements on left half
            return lowerBoundBinarySearch(nums,s,mid-1,target,ans1);
        }
        else if(nums[mid]>target)
            return lowerBoundBinarySearch(nums,s,mid-1,target,ans1);
        else
            return lowerBoundBinarySearch(nums,mid+1,e,target,ans1);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int ans1=-1,ans2=-1;
        int firstPos=lowerBoundBinarySearch(nums,0,n-1,target,ans1);
        int lastPos=upperBoundBinarySearch(nums,0,n-1,target,ans2);

        vector<int> ans;
        ans.push_back(firstPos);
        ans.push_back(lastPos);
        return ans;
    }
};
