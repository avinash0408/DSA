class Solution {
public:
    int recur(vector<int>& prices,int n,int ind,int minPrice,vector<int> &dp){
        if(ind==n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        minPrice = min(minPrice,prices[ind]);
        //nosell
        int a = recur(prices,n,ind+1,minPrice,dp);
        int b = prices[ind]-minPrice;
        return dp[ind]=max(a,b);
    }
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       vector<int> dp(n,-1);
       int prof = recur(prices,n,0,INT_MAX,dp);
       return prof;
    }
};
