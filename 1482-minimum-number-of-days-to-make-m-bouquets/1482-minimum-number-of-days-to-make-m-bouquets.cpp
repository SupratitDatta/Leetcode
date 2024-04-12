class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size(), cnt = 0, b = 0;

        for(int i=0; i<n; i++){
            if(bloomDay[i] <= day){
                cnt++;
            } 
            else{
                b += (cnt/k);
                cnt = 0;
            }
        }
        b += (cnt/k);
        return b>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k){
        long int val = m * 1ll * k * 1ll;
        int n = bloomDay.size(); 
        if (val > n){
            return -1;
        } 
        int minimum = INT_MAX, maximum = INT_MIN;
        for (int i = 0; i < n; i++) {
            minimum = min(minimum, bloomDay[i]);
            maximum = max(maximum, bloomDay[i]);
        }

        int s = minimum, e = maximum;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(possible(bloomDay, mid, m, k)){
                e = mid-1;
            } 
            else
                s = mid+1;
        }
        return s;
    }
};