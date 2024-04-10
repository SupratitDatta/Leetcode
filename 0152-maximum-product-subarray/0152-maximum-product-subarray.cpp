class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int x=0,y=0,k=0;
        for(int i=0; i<nums.size(); i++){
            int m = max(max(x*nums[i], y*nums[i]), nums[i]);
            y = min(min(x*nums[i], y*nums[i]), nums[i]);
            x = m;
            k = max(k,x);
        }
        return k;
    }
};