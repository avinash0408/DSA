class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        unordered_map<char,int> mp;
        int n = s.size();
        int l=0,r=0;
        int count =0;
        while(r<n){
            if(mp[s[r]]){
                count = max(count,r-l);
                mp[s[l]]=0;
                l++;
            }
            else{
                mp[s[r]]=1;
                r++;
            }
        }
        return max(count,r-l);
    }
};