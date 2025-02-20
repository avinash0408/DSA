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
       vector<int> dp(n,0);
       int minPrice = prices[0];
       int maxProfit = 0;
       for(int i=0;i<n;i++){
        minPrice = min(minPrice,prices[i]);
        maxProfit= max(prices[i]-minPrice,maxProfit);
       }
       return maxProfit;
    }
};
