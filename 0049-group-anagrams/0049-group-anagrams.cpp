class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int n = strs.size();
        for(string s:strs){
            string tmp = s;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it: mp){
            res.push_back(it.second);
        }
        return res;
    }
};