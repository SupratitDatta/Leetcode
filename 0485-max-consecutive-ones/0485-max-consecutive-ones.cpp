class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size(),c=0,m=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                c++;
            }
            else{
                m = max(m, c);
                c = 0;
            }
        }
        m = max(m, c);
        if(m > n) return -1;
    return m;
    }
};