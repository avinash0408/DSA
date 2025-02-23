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
    void travel(TreeNode* root, TreeNode* &adj,int &mini){
        if(root==nullptr) return ;
        travel(root->left,adj,mini);
        if(adj){
            mini = min(mini,abs(root->val-adj->val));
        }
        adj = root;
        travel(root->right,adj,mini);
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        TreeNode* adj = nullptr;
        travel(root,adj,mini);
        return mini;
    }
};
