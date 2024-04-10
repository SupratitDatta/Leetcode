class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        for (int j=0, i=m; j<n; j++){
            n1[i] = n2[j];
            i++;
        }
        sort(n1.begin(),n1.end());
    }
};