class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sp = -1;
        int fp = 0;
        int n = nums.size();
        int k=0;
        while(fp<n){
            if(nums[fp]!=val){
                nums[++sp] = nums[fp];
            }
            fp++;
        }
        return sp+1;
    }
};