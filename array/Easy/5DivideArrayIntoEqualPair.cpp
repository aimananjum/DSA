class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        
        
        /*
        if frequency of elements in array are even then its xor is zero
        but if xor is zero its not sure that the elements frequency is even
        eg: 2,4,6 xor is 0 but its frequency is not even
            010 ^ 
            100 ^
            110
            -----
            000 
        */
        //Wrong anwer O(n) time O(1) space
        // int n=nums.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans^=nums[i];
        // }
        // if(ans==0)return true;
        // else return false;
        
        //O(nlogn) time O(1) space
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // for(int i=0;i<n-1;i+=2){
        //     if(nums[i]!=nums[i+1]) return false;
        // }
        // return true;
        
        O(n) time O(n) space
        unordered_map<int,int> mp;
        for(auto a:nums){
            mp[a]++;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]%2!=0) return false;
        }
        return true;
    }
};
