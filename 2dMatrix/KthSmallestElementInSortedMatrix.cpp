class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        /*
        [1, 5, 9]
        [10,11,13]
        [12,13,15]
        */

        //binary search  O(1) space
        int row=matrix.size();
        int col=row;
        int st=matrix[0][0];
        int en=matrix[row-1][col-1];

        while(st<en){
            int mid = st+(en-st)/2; //calculating any mid between st and en
            int count=0;//to store no. of elements which is less than mid
            for(int i=0;i<row;i++){
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();//for each how many elements are less than mid 
            }
            if(count<k){//2 ele < 8 (mid) possible ans lies in right half
                    st=mid+1;//by increasing st mid value is also increase so count can reach to k
                }
            else{
                en=mid;
            }
        }
        return st;

        //push all ele to priority queue and pop kth smallest o(k) space
        
        // int row=matrix.size();
        // int col=row;

        // priority_queue<int> pq;
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         pq.push(matrix[i][j]);
        //         if(pq.size()>k){
        //             pq.pop();
        //         }
        //     }
        // }
        // return pq.top(); 
    }
};
