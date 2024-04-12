class Solution {
public:
    int dneeded(vector<int>& weights, int c){
        int d = 1, l = 0;
        for (int i=0; i<weights.size(); i++) {
            if (l+weights[i] > c){
                d += 1;
                l = weights[i]; 
            }
            else {
                l += weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s = *max_element(weights.begin(), weights.end());
        int e = accumulate(weights.begin(), weights.end(), 0);
        while(s <= e){
            int mid = s+(e-s)/2;
            if (dneeded(weights, mid) <= days) {
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
        return s;
    }
};