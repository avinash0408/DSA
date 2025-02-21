class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isalnum(s[l]))l++;
            if(!isalnum(s[r])) r--;
            if(isalnum(s[l]) && isalnum(s[r])){
                char sl = (char)tolower(s[l]);
                char sr = (char)tolower(s[r]);
                if(sl==sr){
                    l++;
                    r--;
                }else return false;
            }
        }
        return true;
    }
};