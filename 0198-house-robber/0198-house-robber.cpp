class Solution {
public:
    int findCost(vector<int>& nums, int ind,vector<int>&dp){
        if(ind<0) return 0;
        //noRob
        if(dp[ind]!=-1) return dp[ind];
        int l = findCost(nums,ind-1,dp);
        //rob
        int r = nums[ind]+findCost(nums,ind-2,dp);
        return dp[ind]=max(l,r);
    }
    int rob(vector<int>& nums) {
      int n = nums.size();
      if(n==1) return nums[0];
      if(n==2) return max(nums[0],nums[1]);
      vector<int> dp(n,-1);
    //   dp[0] = nums[0];
    //   dp[1] = max(nums[0],nums[1]);
      int cost = findCost(nums,n-1,dp);
      return cost;
    }
};

