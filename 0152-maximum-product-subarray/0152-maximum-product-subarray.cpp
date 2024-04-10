class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x = nums[0], y = nums[0], k = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int m = max({nums[i], x * nums[i], y * nums[i]});
            y = min({nums[i], x * nums[i], y * nums[i]});
            x = m;

            k = max(k, x);
        }

        return k;
    }
};