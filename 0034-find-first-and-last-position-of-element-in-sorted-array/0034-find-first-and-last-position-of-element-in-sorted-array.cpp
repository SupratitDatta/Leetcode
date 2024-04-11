class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> x(2);
        int s=0, e=nums.size()-1, mid, k=-1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid] == target){
                k = mid;
                e = mid-1;
            }
            else if(target>nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        x[0] = k;
        s=0, e=nums.size()-1, k=-1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid] == target){
                k = mid;
                s = mid+1;
            }
            else if(target>nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        x[1] = k;
        return x;
    }
};