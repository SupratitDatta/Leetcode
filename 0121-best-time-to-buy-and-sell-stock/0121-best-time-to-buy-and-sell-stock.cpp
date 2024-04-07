class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0],p=0;
        for(int i=1; i<prices.size(); i++){
            int c = prices[i] - m;
            p = max(p,c);
            m = min(m,prices[i]);
        }
        return p;
    }
};