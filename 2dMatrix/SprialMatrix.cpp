class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int stRow = 0;
        int stCol = 0;
        int enRow = row-1;
        int enCol = col-1;
        
        int count=0,total=row*col;
        
        while(count<total){
            //st row
            for(int i=stCol;count<total && i<=enCol;i++){
                ans.push_back(matrix[stRow][i]);
                count++;
            }
            stRow++;
            
            //en col
            for(int i=stRow;count<total && i<=enRow;i++){
                ans.push_back(matrix[i][enCol]);
                count++;
            }
            enCol--;
            
            //en Row
            for(int i=enCol;count<total && i>=stCol;i--){
                ans.push_back(matrix[enRow][i]);
                count++;
            }
            enRow--;
            
            //st col
            for(int i=enRow;count<total && i>=stRow;i--){
                ans.push_back(matrix[i][stCol]);
                count++;
            }
            stCol++;
        }
        return ans;
    }
};
