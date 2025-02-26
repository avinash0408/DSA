class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi =0;
        int n = nums.size();
        int s=0;
        for(int i:nums){
            s+=i;
            maxi = max(maxi,s);
            if(s<0) s=0;
        }
        int mini = 0;
        s=0;
        for(int i:nums){
            s+=i;
            mini = min(mini,s);
            if(s>0) s=0;
        }
        return max(maxi,abs(mini));
    }
};
