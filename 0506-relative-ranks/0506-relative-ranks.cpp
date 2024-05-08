class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        int M = 0;
        for (int x : score) {
            if (x > M) {
                M = x;
            }
        }
        vector<int> score_idx(M + 1, 0);
        for (int i = 0; i < n; i++) {
            score_idx[score[i]] = i + 1;
        }
        vector<string> x = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<string> rank(n, "");
        int k = 1;
        for (int i = M; i >= 0; i--) {
            if (score_idx[i] != 0) {
                int j = score_idx[i] - 1;
                if (k < 4) {
                    rank[j] = x[k - 1];
                } 
                else {
                    rank[j] = to_string(k);
                }
                k++;
            }
        }
        return rank;
    }
};