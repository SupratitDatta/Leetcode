class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int s = 0;
        int e = n.size()-1;
        int mid = s + (e-s)/2;
        while (s <= e) {
            if (n[mid] == t) {
                return mid;
            }
            if (t > n[mid]) {
                s = mid + 1;
            } 
            else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        
        return mid;
    }
};