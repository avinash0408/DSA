class Solution {
public:
    
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>> st;
        int n = nums.size();
        int count =0;
        int l=0,r=0;
        while(l<n){
            vector<int> tmp;
            r=l;
            int pcount=0;
            while(r<n){
                if(nums[r]%p==0) pcount++;
                if(pcount>k) break;
                tmp.push_back(nums[r]);
                st.insert(tmp);
                r++;
            }
            l++;
        }
        
        return st.size();
    }
};