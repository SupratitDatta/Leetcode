class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> v;
        for(int i=0; i<queries.size(); i++){
            int a = queries[i][0];
            int b = queries[i][1];
            int k=0;
            for(int j=a; j<=b; j++){
                k = k^arr[j];
            }
            v.push_back(k);
        }
        return v;
    }
};