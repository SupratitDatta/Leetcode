/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
public:
bool isLeaf(TreeNode* root)
    {
        if(root->left == nullptr && root->right == nullptr)
            return true;
        return false;
    }
    int sumNumbers(TreeNode* root, int c)
    {
        if(root == nullptr)
            return 0;

        c = c*10 + root->val;
        
        if(isLeaf(root))
            return c;

        return sumNumbers(root->left, c) + sumNumbers(root->right, c);

    }
    int sumNumbers(TreeNode* root) {
        return  sumNumbers(root, 0);
    }
};