class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool odd = false;
        if(nums[0]&1)
            odd = true;
        for(int i=1;i<nums.size();i++){
            if(odd == (nums[i]&1)) return false;
            odd = nums[i]&1;
        }
        return true;
    }
};
