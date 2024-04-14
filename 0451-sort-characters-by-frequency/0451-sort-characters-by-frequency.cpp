class Solution {
public:
    string frequencySort(string s) {
        using int_char=pair<int, char>;
        int a[75];     
        for(char c : s){
            a[c-'0']++;
        }
        vector<int_char> b;
        for(char c='0'; c<='z'; c++){
            if (a[c-'0']==0){ 
                continue;
            }
            b.emplace_back(a[c-'0'], c);
        }
        sort(b.begin(), b.end(), greater<int_char>());
        string k;
        for (auto& [n, c]: b){
            k+=string(n, c);
        }
        return k;  
    }
};