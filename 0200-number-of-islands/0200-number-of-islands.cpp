class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        int dRow[] = {-1,0,1,0};
        int dCol[] = {0,-1,0,1};
        int icount=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    icount++;
                    //bfs
                    queue<pair<int,int>> que;
                    que.push({i,j});
                    visited[i][j]=1;
                    while(!que.empty()){
                        int row = que.front().first;
                        int col = que.front().second;
                        que.pop();
                        for(int p=0;p<4;p++){
                                int nr = row+dRow[p];
                                int nc = col+dCol[p];
                                if(nr>=0 && nr<m && nc>=0 && nc<n &&
                                    grid[nr][nc]=='1' && !visited[nr][nc]){
                                    que.push({nr,nc});
                                    visited[nr][nc]=1;
                                }
                        }
                    }
                }
            }
        }
        return icount;
    }
};