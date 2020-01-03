/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if(!root) return false;
        
    if(!root->left && !root->right && root->val == sum) return true;
        
    sum = sum - root->val;
        
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}
