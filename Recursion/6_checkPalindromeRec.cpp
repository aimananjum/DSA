/*
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/
class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) return true;
        else return false;
    }
    bool isPalindromRec(string &s,int i,int j){
        cout<<i<<" "<<j<<endl;
        if(i>=j) return true;
        
        while(!isAlphaNum(s[i]) && i<j) i++;
        while(!isAlphaNum(s[j]) && i<j) j--;

        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        else{
        i++;j--;
        return isPalindromRec(s,i,j);
        }
        
    }
    bool isPalindrome(string s) {
        int n=s.size();
        return isPalindromRec(s,0,n-1);
    }
};
