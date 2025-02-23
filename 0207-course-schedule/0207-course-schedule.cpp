class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> topo;
        vector<int> inDeg(numCourses,0);
        queue<int> q;
        vector<vector<int>> adj(numCourses);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                inDeg[it]++;
            }
        }
        for(int i=0;i<numCourses;i++){
            if(inDeg[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int top  = q.front();
            q.pop();
            topo.push_back(top);
            for(int i:adj[top]){
                inDeg[i]--;
                if(inDeg[i]==0) q.push(i);
            }
        }
        return (numCourses==topo.size());
    }
};