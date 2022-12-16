// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*O(n)-time space-O(1)
          if we ignore -ve signs then array is sorted in decreasing order from index 0 till first positive element 
          and from first +ve element to end array is sorted in increasing order
        */  
        int n=nums.size();
        int s=0,e=n-1;
        int pos=n-1;
        vector<int> ans(n,0);
        while(s<=e){
            if(abs(nums[e])>=abs(nums[s])){//en ele is >= st ele the en element is largest ele
                ans[pos--]=abs(nums[e])*abs(nums[e]);
                e--;
            }else{//st ele is largest
                ans[pos--]=abs(nums[s])*abs(nums[s]);
                s++;
            }
        }
        
        return ans;
        
        //O(nlogn)-time space-O(1)
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     nums[i]*=nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};
