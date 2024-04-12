class Solution {
public:
    int sumof(vector<int>& nums, int k){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil((double)nums[i] / k);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        if (nums.size() > threshold){ 
            return -1;
        }
        int s = 1, mid;
        int e = *max_element(nums.begin(), nums.end());
        
        while(s<=e){
            mid = s+(e-s)/2;
            if (sumof(nums, mid) <= threshold) {
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return s;
    }
};