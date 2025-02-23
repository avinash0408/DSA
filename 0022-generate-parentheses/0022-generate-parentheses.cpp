class Solution {
public:
    void recur(vector<string> &res, string cur,int open, int close){
        if(open==0 && close==0){
            res.push_back(cur);
            return;
        }
        if(open>0){
            recur(res,cur+"(",open-1,close);
        }
        if(close>open){
            recur(res,cur+")",open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recur(res,"",n,n);
        return res;
    }
};