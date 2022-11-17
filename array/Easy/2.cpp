class Solution {
public:
    // //TLE O(n^2) time
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])continue;
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }
    
    //O(n) time and space
     vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int no:nums)mp[no]++;
        for(auto it:mp)if(it.second==2)ans.push_back(it.first);
        return ans;
    }
    
    //optimized O(n)
    vector<int> findDuplicates(vector<int>& nums) {
        /*
         for each Element we Can Use -[minus] To track Each Element we are traverse Or Not 
         [as They said That any element can occoure max Twice]
         While Traverseing if We Get Negetive element again We Know 
         That It's Allredy Visited So It Wolud Be a duplicate num <= Push That 
         Into ANS array
        */
        if(nums.empty()) return {};
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
};
