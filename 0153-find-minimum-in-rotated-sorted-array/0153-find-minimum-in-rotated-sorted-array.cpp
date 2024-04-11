class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, e=nums.size()-1;

        while(s<e){
            if(nums[s] <= nums[e]){ 
                return nums[s];
            }
            int mid = s + (e-s)/2;
            if(nums[s] > nums[mid]){
                e = mid;
            } 
            else{
                s = mid+1;
            } 
        }
        
        if(nums[s] <= nums[e]){ 
            return nums[s];
        }

        return -1;
    }
};