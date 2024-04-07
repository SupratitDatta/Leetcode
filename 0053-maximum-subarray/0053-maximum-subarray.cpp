class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int s=0,m=INT_MIN;
        for(int i=0; i<a.size(); i++){
            s += a[i];
            m = max(m,s);
            if(s<0){
                s=0;
            }
        }
        return m;
    }
};