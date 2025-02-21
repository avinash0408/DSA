class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n1 = s.size();
       int n2 = t.size();
       if(n1>n2) return false;
       int l=0,r=0;
       while(r<n2){
            if(l>=n1) return true;
            if(s[l]==t[r]) l++;
            r++;
       }
       if(l<n1) return false;
       return true;
    
    }
};