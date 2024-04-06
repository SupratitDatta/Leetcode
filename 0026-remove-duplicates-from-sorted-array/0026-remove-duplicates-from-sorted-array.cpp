class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int k = 1;
        for(int i = 1; i < a.size(); i++){
            if(a[i] != a[i - 1]){
                a[k] = a[i];
                k++;
            }
        }
        return k;
    }
};