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
    int kthSmall(TreeNode* root,int k, int &count){
        if(root == NULL) return -1;
        int left = kthSmall(root->left,k,count);
        if(left!=-1) return left; 
        count++;
        if(count==k) return root->val;
        return kthSmall(root->right,k,count);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        return kthSmall(root,k,count);
    }
};