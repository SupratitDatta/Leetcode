class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int s = 0;
        for(int i=0; i<t.size(); i++){
            if(t[k]<=t[i]){
                s += t[k];
                if(i>k){
                    s--;
                }
            }
            else{
                s += t[i];
            }
        }
        return s;
    }
};