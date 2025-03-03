class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxipro = nums[0];
        int minipro = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                int tmp = maxipro;
                maxipro = minipro;
                minipro = tmp;
            }
            maxipro = max(nums[i],nums[i]*maxipro);
            minipro = min(nums[i],nums[i]*minipro);
            res = max(res,maxipro);
        }
        return res;
    }
};
