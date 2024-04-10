class Solution {
public:
    int search(vector<int>& nums, int t) {
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            int mid  = s + (e-s)/2;
            if(nums[mid] == t){
                return mid;
            }
            if(t>nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
    }
};