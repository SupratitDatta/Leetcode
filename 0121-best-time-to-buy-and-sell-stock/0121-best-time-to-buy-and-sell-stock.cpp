class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        if(n == 0) return 0;
        int m=0, y=p[0];
        for(int i=1; i<n; i++){
            if(p[i]<y){
                y = p[i];
            } 
            else{
                int x = p[i]-y;
                if(x>m){
                    m = x;
                }
            }
        }
        return m;
    }
};