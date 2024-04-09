class Solution {
public:
    int search(vector<int>& n, int t) {
        int s = 0;
        int e = n.size()-1;
        while(s<=e){
            int mid  = s + (e-s)/2;
            if(n[mid] == t){
                return mid;
            }
            if(t>n[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
    }
};