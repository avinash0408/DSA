class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curMax = 0, curMin =0;
        int minSum = INT_MAX;
        int sum=0; int totSum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            totSum+=nums[i];
            curMax = max(nums[i],curMax+nums[i]);
            maxSum = max(maxSum,curMax);

            curMin = min(nums[i],curMin+nums[i]);
            minSum = min(minSum, curMin);
        }
        if(maxSum<0) return maxSum;
        return max(maxSum,totSum-minSum);
    }
};