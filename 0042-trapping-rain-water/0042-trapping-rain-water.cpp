class Solution {
public:
    int trap(vector<int>& height) {
        int i=0, j=height.size()-1, k=0;
        int l=height[0], r=height[j];
        while(i<j){
            if (l <= r){
                k += (l-height[i]);
                i++;
                l = max(l, height[i]);
            } 
            else{
                k += (r-height[j]);
                j--;
                r = max(r, height[j]);
            }
        }
        return k;
    }
};