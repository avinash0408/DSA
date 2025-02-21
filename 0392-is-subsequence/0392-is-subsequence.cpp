class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m= s.length();
        int n= t.length();
        int j=0;
        if(m>n)
            return false;
        for(int i=0;i<n;){
            if(j>=m) return true;;
            if(s[j]==t[i]){
                j+=1;
                i+=1;
            }
            else{
                i+=1;
            }
        }
        if(j<m) return false;
        return true;
    }
};