class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i = 0, j = 0;
        int n = a.size();
        while(i<n and j<n){
            if(a[i] != 0){
                i++;
            } 
            if(a[j] == 0){
                j++;
            } 
            if((i<n && j<n) && (i<j)){
                swap(a[i],a[j]);
            }
                
            j++;
        }
    }
};