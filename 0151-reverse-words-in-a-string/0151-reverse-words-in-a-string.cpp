class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string k,x;
        for (auto c : s) {
            if (c != ' ') {
                k += c;
            } else {
                if (!k.empty()) {
                    v.push_back(k);
                    k = "";
                }
            }
        }
        if (!k.empty()) {
            v.push_back(k);
        }
        reverse(v.begin(), v.end());
        
        for (auto i : v) {
            x += i;
            x += ' ';
        }
        if (!x.empty()) {
            x.pop_back();
        }
        return x;
    }
};
