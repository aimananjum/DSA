class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int st = 0;
        int en = col-1;
        
        while(st< row && en>=0){
            int ele = matrix[st][en];
            if(ele == target)return true;
            
            else if(ele<target) st++;
            else en--;
        }
        return false;
    }
};
