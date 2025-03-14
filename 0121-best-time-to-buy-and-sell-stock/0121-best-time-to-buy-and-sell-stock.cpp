class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int mini = prices[0];
       int maxi = 0;
       for(int i=0;i<n;i++){
        maxi = max(maxi,prices[i]-mini);
        mini = min(prices[i],mini);
       }
       return maxi;
    }
};
