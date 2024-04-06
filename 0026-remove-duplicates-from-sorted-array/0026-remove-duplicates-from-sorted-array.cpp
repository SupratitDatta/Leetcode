class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int j=1,k=1;
        for (int i=1;i<n && j<n;i++){
            if (a[i]>a[j-1]){
                swap(a[i],a[j]);
                j++;
                k++;
            }
        }
        return k;
    }
};