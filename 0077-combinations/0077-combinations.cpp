class Solution {
public:
    void recur(int n,int k,int ind,vector<int> cur,vector<vector<int>>&res){
        if(cur.size()==k){
            res.push_back(cur);
            return;
        }
        for(int i=ind;i<=n;i++){
            cur.push_back(i);
            recur(n,k,i+1,cur,res);
            cur.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> cur;
        recur(n,k,1,cur,res);
        return res;
    }
};