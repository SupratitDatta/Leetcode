class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<char> rowSet[9];
        std::unordered_set<char> colSet[9];
        std::unordered_set<char> subgridSet[9];

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char c = board[i][j];

                if (c == '.') {
                    continue; 
                }
                if (rowSet[i].count(c) > 0) {
                    return false;
                }
                rowSet[i].insert(c);
                if (colSet[j].count(c) > 0) {
                    return false;
                }
                colSet[j].insert(c);
                int x = (i/3)*3 + j/3;
                if (subgridSet[x].count(c) > 0) {
                    return false;
                }
                subgridSet[x].insert(c);
            }
        }
        return true;
    }
};