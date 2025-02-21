class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pArr[n],sArr[n];
        pArr[0]=1;sArr[n-1]=1;
        vector<int> productArr;
        for(int i=1;i<n;i++){
            pArr[i]=pArr[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sArr[i]=sArr[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            productArr.push_back(pArr[i]*sArr[i]);
        }

        return productArr;
    }
};