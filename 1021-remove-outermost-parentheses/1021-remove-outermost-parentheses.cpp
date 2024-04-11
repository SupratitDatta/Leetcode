class Solution {
public:
    string removeOuterParentheses(string s) {
        string k;
        int opened = 0;
        for (char c : s) {
            if (c == '(' && opened++ > 0) k += c;
            if (c == ')' && opened-- > 1) k += c;
        }
        return k;
    }
};