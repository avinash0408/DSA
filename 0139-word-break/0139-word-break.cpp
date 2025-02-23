class Solution {
public:
    bool check(string s,int ind,unordered_set<string> &st,vector<int> &dp){
        if(ind==s.size()) return true;
        if(dp[ind]!=-1) return dp[ind];
        for(int i=ind;i<s.size();i++){
            if(st.count(s.substr(ind,i-ind+1)) && check(s,i+1,st,dp))
                return dp[ind]=true;
        }

        return dp[ind]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        vector<int> dp(s.size()+1,-1);
        return check(s,0,st,dp);
    }
};