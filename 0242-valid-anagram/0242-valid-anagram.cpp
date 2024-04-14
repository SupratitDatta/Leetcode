class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[126]={0},b[126]={0};
        for(int i=0; i<s.size(); i++){
            char x = s[i];
            int y = s[i] - '0';
            a[y]++;
        }
        for(int i=0; i<t.size(); i++){
            char x = t[i];
            int y = t[i] - '0';
            b[y]++;
        }
        bool flag = true;
        for(int i=0; i<125; i++){
            if(a[i] != b[i]){
                flag = false;
                return flag;
            }
        }
        return flag;
    }
    
};