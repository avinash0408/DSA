class Solution {
public:
    string minWindow(string s, string t) {
       int m = s.size();
       int n = t.size();
       vector<int> freq(256,0);
        for(char c:t)
          freq[c]++;
        int minL = INT_MAX;
        int sInd = -1;
        int count =0;
        int l=0,r=0;
        while(r<m){
            if(freq[s[r]]>0) count++;
            freq[s[r]]--;
            while(count == n){
                if(r-l+1 < minL){
                    minL = r-l+1;
                    sInd = l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return sInd==-1 ? "" : s.substr(sInd,minL);
    }
};