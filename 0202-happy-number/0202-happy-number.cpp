class Solution {
public:
    bool isHappy(int n) {
        vector<int> vec;
        int k=0;
        while(k!=1){
            k=0;
            while(n>0){
                int a=n%10;
                k+=(a*a);
                n/=10;
            }
            if(find(vec.begin(),vec.end(),k)!=vec.end())
                return false;
            vec.push_back(k);
            n=k;
        }
        return true;
    }
};