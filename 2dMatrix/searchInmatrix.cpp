class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int st = 0;
        int en = row*col -1;
        
        while(st<=en){
            int mid = st + (en - st)/2;
            int ele = matrix[mid/col][mid%col];// divide by col gives row number and % by col gives col no 
            if(target == ele){
                return true;
            }
            else if(ele<target){
                st=mid+1;
            }
            else{
                en=mid-1;
            }
        }
        return false;
    }
};
