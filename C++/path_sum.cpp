/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return false;
        
        if(root->left == NULL and root->right == NULL and root->val == sum) return true;
        
        sum = sum - root->val;
        
        return hasPathSum(root->left, sum) or hasPathSum(root->right, sum);
    }
};
