class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        int dRow[]={-1,0,1,0};
        int dCol[]={0,-1,0,1};
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                visited[i][0]=1;
            }
            if(board[i][n-1]=='O'){
                q.push({i,n-1});
                visited[i][n-1]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                q.push({0,i});
                visited[0][i]=1;
            }
            if(board[m-1][i]=='O'){
                q.push({m-1,i});
                visited[m-1][i]=1;
            }
        }
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr = row+dRow[i];
                int nc = col+dCol[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && !visited[nr][nc] && board[nr][nc]=='O'){
                    visited[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }

    }
};