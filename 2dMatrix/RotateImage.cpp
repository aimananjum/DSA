class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        /*            T      Swap col
        1 2 3       1 4 7   7 4 1  
        4 5 6       2 5 8   8 5 2
        7 8 9       3 6 9   9 6 3
        */
        //first transpose the matrix
        int row=a.size();
        for(int i=0;i<row;i++){
            for(int j=i+1;j<row;j++){
                swap(a[j][i],a[i][j]);
            }
        }
        //swap the columns
        for(int i=0;i<row;i++){
            for(int j=0;j<row/2;j++){
                swap(a[i][j],a[i][row-j-1]);
            }
        }
        
        // int n=a.size();
        
        // for(int i=0,j;i<n;i++){
        //     for(j=0;j<i;j++){
        //         swap(a[j][i],a[i][j]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     reverse(a[i].begin(),a[i].end());
        // }
        
        //brute force space used O(n^2)
        // int n=a.size();
        // int b[n][n];
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         b[j][n-1-i]=a[i][j];
        //     }
        // }
        // a.clear();
        // for(int i=0;i<n;i++){
        //     vector<int> v;
        //     for(int j=0;j<n;j++){
        //         v.push_back(b[i][j]);
        //     }
        //     a.push_back(v);
        // }
    }
};
