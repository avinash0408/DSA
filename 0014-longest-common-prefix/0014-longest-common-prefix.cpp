class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n = strs.size();
        int ind = 0;
        while(true){
            if(ind>=strs[0].size()) break;
            char c=strs[0][ind];
            for(int i=1;i<n;i++){
                if(ind>=strs[i].size()) return res;
                if(strs[i][ind]!=c)
                    return res;
            }
            res+=c;
            ind++;
        }
        return res;
    }
};