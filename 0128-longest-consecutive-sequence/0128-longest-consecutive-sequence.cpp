class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       if(n==0) return 0;
       int maxLen = 0;
       unordered_set<int> uset;
       for(int i:nums) uset.insert(i);
       for(auto it:uset){
        if(uset.find(it-1)!=uset.end()) continue;
        else{
            int count=1;
            int x = it;
            while(uset.find(x+1)!=uset.end()){
                count++;
                x+=1;
            }
            maxLen = max(maxLen,count);
        }
       }
       return maxLen;
    }
};