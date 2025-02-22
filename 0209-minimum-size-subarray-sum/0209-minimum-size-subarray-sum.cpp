class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int sum=0;;
        int count=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                count = min(count,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return count==INT_MAX?0:count;
    }
};
