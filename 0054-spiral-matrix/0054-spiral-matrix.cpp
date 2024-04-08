class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int t = 0, b = m.size() - 1, l = 0, r = m[0].size() - 1;
        vector<int> v;

        while (t <= b && l <= r) {
            for (int i = l; i <= r; ++i) {
                v.push_back(m[t][i]);
            }
            t++;
            for (int i = t; i <= b; ++i) {
                v.push_back(m[i][r]);
            }
            r--;
            if (t <= b){ 
                for (int i = r; i >= l; --i) {
                    v.push_back(m[b][i]);
                }
                b--;
            }
            if (l <= r) {
                for (int i = b; i >= t; --i) {
                    v.push_back(m[i][l]);
                }
                l++;
            }
        }

        return v;
    }
};