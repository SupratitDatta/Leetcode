class Solution {
public:
    int removeElement(vector<int>& n, int v) {
        int k = 0;
        for(int i =0; i< n.size(); i++){
            if(n[i] != v){
                n[k] = n[i];
                k++;
            }
        }
        return k;
    }
};