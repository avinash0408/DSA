class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26,0);
        for(char c:magazine) v[c-'a']++;
        //int count =0;
        int n = ransomNote.size();
        for(char c:ransomNote){
            if(v[c-'a']<=0) return false;
            v[c-'a']--; 
        }
        return true;
    }
};