class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& range) {
        sort(range.begin(),range.end());
        vector<vector<int>> res;
        for(auto it:range){
            int rsize = res.size();
            if(rsize==0){
                res.push_back(it);
            }
            else{
                if(res[rsize-1][1]<it[0]){
                    res.push_back(it);
                }else{
                    res[rsize-1][1] = max(res[rsize-1][1],it[1]);
                }
            }
        }

        return res;
    }
};