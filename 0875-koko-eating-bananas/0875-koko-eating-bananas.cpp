class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        long long e = *max_element(piles.begin(), piles.end());
        long long k = 0;

        while(s <= e){
            int mid = s + (e-s)/2;
            long long hour = 0;
            for(int i=0; i<piles.size(); i++){
                hour += (piles[i] + mid - 1) / mid; 
            }
            if(hour > h){
                s = mid + 1;
            }
            else{
                k = mid;
                e = mid - 1;
            }
        }
        return k;
    }
};