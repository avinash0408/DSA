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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        bool s = false;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> row;
            for(int i=0;i<size;i++){
                TreeNode* top = q.front();
                row.push_back(top->val);
                q.pop();
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            if(s) reverse(row.begin(),row.end());
            s = !s;
            res.push_back(row);
        }
        return res;
    }
};