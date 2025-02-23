class Solution {
public:
    void recur(vector<int>& nums, int &n,vector<int> &used,vector<int> &cur,vector<vector<int>>&res){
        if(cur.size()==n){
            res.push_back(cur);
            return;
        }
        for(int i=0;i<n;i++){
            if(used[i]==0){
                used[i] = 1;
                cur.push_back(nums[i]);
                recur(nums,n,used,cur,res);
                used[i]=0;
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        int n = nums.size();
        vector<int> used(n,0);
        recur(nums,n,used,cur,res);
        return res;
    }
};