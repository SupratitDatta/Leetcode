class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(), nums.end());
        int k = -1, n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                k = i;
                break;
            }
        }
        if (k == -1) {
            reverse(nums.begin(), nums.end());
        } 
        else {
            for (int i = n - 1; i > k; i--) {
                if (nums[i] > nums[k]) {
                    swap(nums[i], nums[k]);
                    break;
                }
            }

            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};
