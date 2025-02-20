class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mProfit=0;
       int n = prices.size();
       int mini = prices[0];
       for(int i=1;i<n;i++){
        int p = prices[i] - mini;
        mProfit = max(p,mProfit);
        mini = min(mini,prices[i]);
       }
       return mProfit;
    }
};