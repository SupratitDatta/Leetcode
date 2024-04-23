class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};
    
        vector<list<int>> al(n);
        vector<int> d(n, 0);
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            al[u].push_back(v);
            al[v].push_back(u);
            d[u]++;
            d[v]++;
        }
        
        queue<int> leaves;
        for (int i = 0; i < n; ++i) {
            if (d[i] == 1) leaves.push(i);
        }
        
        int remainingNodes = n;
        while (remainingNodes > 2) {
            int leavesCount = leaves.size();
            remainingNodes -= leavesCount;
            for (int i = 0; i < leavesCount; ++i) {
                int leaf = leaves.front();
                leaves.pop();
                for (int neighbor : al[leaf]) {
                    if (--d[neighbor] == 1) {
                        leaves.push(neighbor);
                    }
                }
            }
        }
        
        vector<int> result;
        while (!leaves.empty()) {
            result.push_back(leaves.front());
            leaves.pop();
        }
        return result;
    }
};