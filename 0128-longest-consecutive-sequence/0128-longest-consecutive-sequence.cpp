class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       if(n==0) return 0;
        unordered_set<int> st;
        for(int i:nums)
            st.insert(i);
        int count=0;
        int maxLen=0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                count=1;
                int nxt = it+1;
                while(st.find(nxt)!=st.end()){
                    count++;
                    nxt+=1;
                }
                maxLen = max(count,maxLen);
            }
        }
        return maxLen;
    }
};