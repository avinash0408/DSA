class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums,int ind,int n,int target){
        unordered_map<int,int> mp;
        vector<vector<int>> res;
        for(int i=ind;i<n;i++){
            if(mp[target-nums[i]])
                res.push_back(vector<int>{nums[i],target-nums[i]});
            mp[nums[i]] = i;
        }
        return res;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size(); 
       vector<vector<int>> res;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n-2;i++){
        if (i>0 && nums[i]==nums[i - 1]) continue; 
        int l=i+1;
        int r=n-1;
        while(l<r){
            int s = nums[i]+nums[l]+nums[r];
            if(s==0) {
                res.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1]) l++;
                while(l<r && nums[r]==nums[r-1]) r--;
                l++;
                r--;
            }
            else if(s<0) l++;
            else r--;
        }
       }
       return res;
    }
};