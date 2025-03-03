class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> count(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        int rep;
        int mis;
        for(int i=1;i<=n*n;i++){
            if(count[i]>1) rep=i;
            else if(count[i]==0) mis=i;
        }
        return {rep,mis};
    }
};