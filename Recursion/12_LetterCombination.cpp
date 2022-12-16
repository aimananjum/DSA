/*
  1   2    3
     abc  def
     
  4   5   6
ghi  jkl mno

  7   8   9
pqrs tuv wxyz

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
*/
class Solution {
public:
    void solve(string digits,vector<string> &ans,string output,int index,string mp[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int mpNumber = digits[index]-'0';//extracting number from input string
        string mappedStr = mp[mpNumber];//its corresponding mapped string eg for "2" its string is "abc"

        for(int i=0;i<mappedStr.size();i++){
            output.push_back(mappedStr[i]);
            solve(digits,ans,output,index+1,mp);
            output.pop_back();//backtracking to remove prev element
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans={};
        if(digits.size()==0) return ans;
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapping);
        return ans;
    }
};
