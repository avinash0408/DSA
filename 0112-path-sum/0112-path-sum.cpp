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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        if(!root->left && !root->right){
            if(targetSum==root->val) return true;
            return false;
        }
        bool left = hasPathSum(root->left,targetSum-root->val);
        bool right = hasPathSum(root->right,targetSum-root->val);
        if(left==true || right==true)
            return true;
        return false;
    }
};