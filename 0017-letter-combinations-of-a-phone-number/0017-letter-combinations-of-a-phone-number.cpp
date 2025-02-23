class Solution {
public:
    void recur(string digits,int ind,int n,string output,vector<string>& result,string map[]){
        if(output.size()==n){
            result.push_back(output);
            return;
        }
        for(char c:map[digits[ind]-'0'])
            recur(digits,ind+1,n,output+c,result,map);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits=="") return res;
        int n = digits.size();
        string map[] = {"","","abc","def","ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
        recur(digits,0,n,"",res,map);
        return res;
    }
};