class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end()); 
        
        int n = deck.size();
        vector<int> v(n);
        deque<int> x;
        
        for (int i=0; i<n; i++) {
            x.push_back(i); 
        }
        
        for (int i=0; i<deck.size(); i++) {
            int j = x.front(); 
            x.pop_front();
            v[j] = deck[i]; 
            if (!x.empty()) {
                x.push_back(x.front()); 
                x.pop_front(); 
            }
        }
        return v;
    }
};