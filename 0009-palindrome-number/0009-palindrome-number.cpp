class Solution {
public:
    bool isPalindrome(int x) {
          if (x < 0) {
            return false;
        }

        long long r = 0;
        long long t = x;

        while (t != 0) {
            int d = t % 10;
            r = r * 10 + d;
            t /= 10;
        }

        return (r == x);
    }
};