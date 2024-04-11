class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, e = nums.size()-1;
        int k = INT_MAX;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(nums[s] <= nums[e]){
                k = min(k, nums[s]);
                break;
            }
            if(nums[s] <= nums[mid]){
                k = min(k, nums[s]);
                s = mid + 1;
            } 
            else{
                k = min(k, nums[mid]);
                e = mid - 1;
            }
        }
        return k;
    }
};