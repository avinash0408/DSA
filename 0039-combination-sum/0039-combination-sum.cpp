class Solution {
public:
    void recur(vector<int>& candidates, int target,vector<int> &cur, vector<vector<int>> &res,int ind){
        if(target==0){
            res.push_back(cur);
            return;
        }
        if(target<0) return;
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]<=target){
                cur.push_back(candidates[i]);
                recur(candidates,target-candidates[i],cur,res,i);
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        recur(candidates,target,cur,res,0);
        return res;
    }
};