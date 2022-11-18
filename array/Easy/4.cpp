class Solution {
public:
  
    // void sortColors(vector<int>& nums) {
    //     unordered_map<int,int> m;
    //     for(auto a:nums){
    //         m[a]++;
    //     }
    //     int j=0;
    //     if(m.find(0)->second >=1){
    //         for(int i=0;i<m.find(0)->second;i++){
    //             nums[j++]=0;
    //         }
    //     }
    //     if(m.find(1)->second >=1){
    //         for(int i=0;i<m.find(1)->second;i++){
    //             nums[j++]=1;
    //         }
    //     }
    //     if(m.find(2)->second >=1){
    //         for(int i=0;i<m.find(2)->second;i++){
    //             nums[j++]=2;
    //         }
    //     }
    // }
  //sort 0 1 2 --> space-O(1) time-O(n)
    void sortColors(vector<int>& nums) {
        int s=0,mid=0,e=nums.size()-1;
        while(mid<=e){
            if(nums[mid]==0){ //mid start with s-ptr if 0 is found the swap with st-ptr bcoz 0 should be at starting of answer array
                swap(nums[s],nums[mid]);
                s++;
                mid++;
            }
            else if(nums[mid]==1){ //if mid ele is found to be 1 then just inc mid--skip if 1 found
                mid++;
            }
            else if(nums[mid]==2){//same as done for 0
                swap(nums[mid],nums[e]);
              
                e--;
            }
        }
    }
};
