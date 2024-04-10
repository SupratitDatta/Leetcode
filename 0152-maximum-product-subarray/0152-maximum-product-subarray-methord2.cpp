class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int x=1,y=1,m=INT_MIN;

        for (int i = 0; i < n; i++) {
            if (x == 0){
                x = 1;
            }
            if (y == 0){
                y = 1;
            }
            x *= nums[i];
            y *= nums[n - i - 1];
            m = max(m, max(x, y));
        }
        return m;
    }
};