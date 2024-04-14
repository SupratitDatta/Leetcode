class Solution {
public:
    string removeOuterParentheses(string s) {
        string k;
        int x = 0;
        for (char c : s) {
            if (c == '(' && x++ > 0){ 
                k += c;
            }
            if (c == ')' && x-- > 1) {
                k += c;
            }
        }
        return k;
    }
};