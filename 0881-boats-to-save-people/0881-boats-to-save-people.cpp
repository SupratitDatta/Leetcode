class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());       
        int x=0;
        for(int i=0, j=people.size()-1;i<=j; j--){
            x++;
            if (people[i]<=limit-people[j])
                i++;          
        }
        return x;
    }
};