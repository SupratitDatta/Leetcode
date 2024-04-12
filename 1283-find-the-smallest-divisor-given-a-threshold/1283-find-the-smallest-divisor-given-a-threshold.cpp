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
        int s = 1, mid,k=0;
        int e = *max_element(nums.begin(), nums.end());
        
        while(s<=e){
            mid = s+(e-s)/2;
            int x = sumof(nums,mid);
            if(x == threshold){
                return mid;
            }
            else if(x < threshold){
                k = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return k;
    }
};