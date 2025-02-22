class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& range) {
        vector<vector<int>> res;
        int n= range.size();
        sort(range.begin(),range.end());
        for(int i=0;i<n;i++){
            if(res.empty()||range[i][0]>res.back()[1]){
                res.push_back(range[i]);
            }else{
                res.back()[1] = max(res.back()[1],range[i][1]);
            }
        }
        return res;
    }
};