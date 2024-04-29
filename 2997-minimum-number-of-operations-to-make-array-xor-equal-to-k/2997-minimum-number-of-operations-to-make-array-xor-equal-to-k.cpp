class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for (int n : nums) {
            x = x ^ n;
        }
        int count = 0;
        while (k || x) {
            if ((k % 2) != (x % 2)) {
                count++;
            }
            
            k /= 2;
            x /= 2;
        }
        
        return count;
    }
};