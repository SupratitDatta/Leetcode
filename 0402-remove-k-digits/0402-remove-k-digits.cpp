class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() == k){
            return "0";
        }
        string a;
        vector<char> s;

        for(int i=0; i<num.length(); i++){
            while(k > 0 && !s.empty() && s.back() > num[i]){
                s.pop_back();
                k--;
            }
            s.push_back(num[i]);
        }

        while(k-- > 0){
            s.pop_back();
        }
        for(const char c : s){
            if (c == '0' && a.empty())
                continue;
            a += c;
        }

        return a.empty() ? "0" : a;
    }
};