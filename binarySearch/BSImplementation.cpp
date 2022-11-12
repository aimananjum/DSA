class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        
        while(s<=e){//if only one element in array then it will work correct
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
};