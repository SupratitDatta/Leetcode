#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string k;
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
        string x;
        for (auto it : v) {
            x += it;
            x += ' ';
        }
        if (!x.empty()) {
            x.pop_back();
        }
        return x;
    }
};
