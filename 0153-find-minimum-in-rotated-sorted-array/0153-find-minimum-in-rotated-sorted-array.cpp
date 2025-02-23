class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int mini = INT_MAX;
        while(l<=h){
            int mid = (l+h)/2;
            mini = min(nums[mid],mini);
            if(nums[mid]>nums[h]){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return mini;   
    }
};