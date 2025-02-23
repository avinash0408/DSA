class Solution {
public:
    int check(int n,vector<int> &dp){
        if(n<=2) return dp[n]=n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=check(n-1,dp)+check(n-2,dp);
    }
    int climbStairs(int n) {
       //n-1 + n-2
       vector<int> dp(n+1,-1);
       return check(n,dp);
    }
};