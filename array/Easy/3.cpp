class Solution {
public:
    //O(n^2) time TLE
    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    //     vector<int> ans;
    //     int n=nums1.size(),m=nums2.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(nums1[i]==nums2[j]){
    //                 ans.push_back(nums1[i]);
    //                 nums2[j]=-1;
    //                 if(i<n && nums1[i]==nums1[i+1])i++;
    //                 break;
    //             }
    //         }
    //     }
    //     return ans;
    // }
  //sorting O(nlogn)+O(n)-time     space O(1)
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        unordered_set<int> ans;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                ans.insert(nums1[i]);
                i++; j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        vector<int> v;
        for (auto it = ans.begin(); it!=ans.end(); ++it)  
        v.push_back(*it);  
        return v;
    }
};
