class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0,n=nums.size();
        unordered_map<int,int> umap;
        umap[0]=1;
        int sum =0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            count+=umap[sum-k];
            umap[sum]++;
        }
        return count;
    }
};