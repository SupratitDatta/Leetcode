class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int r = 0;
        int c = col-1;
        while(r < row && c >= 0){
            int k = matrix[r][c];
            if(k == target){ 
                return 1;
            }
            if(k < target){ 
                r++;
            }
            else c--;
        }
        return 0;
    }
};