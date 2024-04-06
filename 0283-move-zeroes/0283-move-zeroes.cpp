class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int l = 0;
        for (int r = 0; r < a.size(); r++) {
            if (a[r] != 0) {
                swap(a[r], a[l]);
                l++;
            }
        } 
    }
};