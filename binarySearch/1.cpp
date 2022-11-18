//first and last occurences of a given element
//to calculate no of elements then formula is: lastIdx - firstIdx + 1
class Solution {
public:
    int firstBinarySearch(vector<int>& arr, int n, int k){
    int s=0,e=n-1,mid,ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastBinarySearch(vector<int>& arr, int n, int k){
    int s=0,e=n-1,mid,ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int fIdx = firstBinarySearch(nums,n,target);
        int lIdx = lastBinarySearch(nums,n,target);
        vector<int> ans;
        ans.push_back(fIdx);
        ans.push_back(lIdx);
        return ans;
    }
};
