class Solution {
public:
    bool check(vector<int>& a) {
        int n = a.size();
        int k = 0;
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                k++;
            }
        }
        if(a[n-1]>a[0]){
            k++;
        }
        if(k>1){
            return false;
        }
        return true;
    }
};