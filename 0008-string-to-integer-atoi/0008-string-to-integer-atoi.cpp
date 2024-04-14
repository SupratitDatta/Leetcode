class Solution {
public:
    int myAtoi(string s) {
        int i=0, x=1;
        long k=0;
        while(i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-'){
            x = -1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        while(i<s.length()){
            if(s[i] >= '0' && s[i] <= '9'){
                k=k*10+(s[i]-'0');
                if(k>INT_MAX && x==-1){
                    return INT_MIN;
                }
                else if(k > INT_MAX && x == 1){
                    return INT_MAX;
                }
                i++;
            }
            else{
                return k*x;
            }
        }
        return (k*x);
    }
};