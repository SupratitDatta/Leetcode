class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> x;
	    for(auto it: nums){
		   x[it]++;
        }
	    for(auto i:x){
		    if(i.second==1){
			    return i.first;
            }
        }
	   return -1;
    }
};