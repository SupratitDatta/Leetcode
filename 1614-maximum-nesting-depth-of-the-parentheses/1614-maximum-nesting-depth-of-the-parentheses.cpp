class Solution {
public:
    int maxDepth(string s) {
        int c = 0, m = 0;
        for (char i : s){
            if (i == '('){
                c++;
                if(m < c){
                    m = c;
                }
            } 
            else if (i == ')'){
                c--;
            }
        }
        return m;
    }
};