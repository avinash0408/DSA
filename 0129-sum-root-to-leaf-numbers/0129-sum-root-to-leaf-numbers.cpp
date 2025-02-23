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
    int totSum(TreeNode* root,int curVal, int &sum){
        if(!root->left && !root->right){
            sum+=curVal;
            return sum;
        }
        if(root->left) totSum(root->left,(curVal*10)+root->left->val,sum);
        if(root->right) totSum(root->right,(curVal*10)+root->right->val,sum);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        int sum = 0;
        totSum(root,root->val,sum);
        return sum;
    }
};