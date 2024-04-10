class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;

        for(int i=0; i<intervals.size(); i++){
            vector<int> k = intervals[i];
            while(i < intervals.size() && k[1] >= intervals[i][0]){
                k[1] = max(k[1],intervals[i][1]);
                i++;
            }
            if(i < intervals.size() && k != intervals[i]) i--;
            v.push_back(k);
        }
        return v;
    }
};