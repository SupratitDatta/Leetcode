class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c = 0;
        int sum = 0;
        unordered_map<int, int> x; 
        x[0] = 1;

        for (int num : nums) {
            sum += num;
            if (x.find(sum - k) != x.end()) {
                c += x[sum - k];
            }
            if (x.find(sum) != x.end()) {
                x[sum]++;
            } else {
                x[sum] = 1;
            }
        }
        return c;
    }
};