class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxInd = 0;
        for(int i=0;i<n;i++){
            if(i>maxInd) return false;
            maxInd = max(maxInd,nums[i]+i);
        }
        return true;
    }
};