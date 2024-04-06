class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int m = INT_MIN, c=0;

        for(int i=0; i<a.size(); i++) {
            if(a[i] == 1){
                c++;
                m = max(m,c);
            } 
            else{
                c = 0;
            }
        }
        return m == INT_MIN ? 0 : m;
    }
};