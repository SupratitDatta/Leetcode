class Solution {
public:
    long long wonderfulSubstrings(string word) {
        int n = word.size();
        long long cnt = 0;
        int x[1024] = {0};
        x[0] = 1;
        int sum = 0;
        for (int c : word) {
            int k = c - 'a';
            sum ^= (1 << k);
            cnt += x[sum]++;
            for (char i = 0; i < 10; i++) {
                cnt += x[sum ^ (1 << i)];
            }
        }
        return cnt;
    }
};