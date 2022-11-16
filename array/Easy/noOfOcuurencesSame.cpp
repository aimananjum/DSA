//https://leetcode.com/problems/unique-number-of-occurrences/
/*
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*/
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto a : arr){
            m[a]++;
        }
        unordered_set<int> s;
        for(auto a:m){
            s.insert(a.second);
        }
        if(s.size()==m.size()){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};
