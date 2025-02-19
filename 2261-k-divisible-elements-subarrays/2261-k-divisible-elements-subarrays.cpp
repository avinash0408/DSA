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
            while(r<n){
                tmp.push_back(nums[r]);
                st.insert(tmp);
                r++;
            }
            l++;
        }
        for(auto it:st){
            int pcount=0;
            for(int i:it){
                if(i%p==0) pcount++;
            }
            if(pcount<=k)
                count++;
        }
        return count;
    }
};