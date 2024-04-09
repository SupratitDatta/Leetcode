class Solution {
public:
    int subarraySum(vector<int>& n, int k) {
        int c = 0,sum = 0;
        unordered_map<int, int> x; 
        x[0] = 1;
        for(int i=0; i<n.size(); i++){
            sum += n[i];
            int remove = sum - k;
            c += x[remove];
            x[sum] += 1;
        }
        //Method 2
        // for (int num : n) {
        //     sum += num;
        //     if (x.find(sum - k) != x.end()) {
        //         c += x[sum - k];
        //     }
        //     if (x.find(sum) != x.end()) {
        //         x[sum]++;
        //     } 
        //     else {
        //         x[sum] = 1;
        //     }
        // }
        return c;
    }
};