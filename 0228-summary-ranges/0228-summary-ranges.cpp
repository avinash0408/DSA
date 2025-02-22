class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        int l=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                int r = nums[i-1];
                string tmp= to_string(nums[l]);
                if(nums[l]<r) res.push_back(tmp+"->"+to_string(r));
                else res.push_back(tmp);
                l=i;
            }
        }
        if (l < n) {
            if (nums[l] < nums[n - 1])
                res.push_back(to_string(nums[l]) + "->" + to_string(nums[n - 1]));
            else
                res.push_back(to_string(nums[l]));
        }
        return res;
    }
};
