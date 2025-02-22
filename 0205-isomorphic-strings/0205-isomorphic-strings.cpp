class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        int sv[256]={0};
        int tv[256]={0};
        for(int i=0;i<n;i++){
            if(sv[s[i]-'a']!=tv[t[i]-'a'])
                return false;
            sv[s[i]-'a']=i+1;
            tv[t[i]-'a']=i+1;
        }
        return true;
    }

}; 



