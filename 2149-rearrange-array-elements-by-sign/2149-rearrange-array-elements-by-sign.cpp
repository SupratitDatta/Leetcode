class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(),p=0,ne=1;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                v[p] = nums[i];
                p += 2;
            }
            else{
                v[ne] = nums[i];
                ne += 2;
            }
        }
        return v;
    }
};