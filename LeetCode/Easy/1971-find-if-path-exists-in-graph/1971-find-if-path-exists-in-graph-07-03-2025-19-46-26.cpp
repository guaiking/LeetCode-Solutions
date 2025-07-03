class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges1, int source, int destination) {
        vector<vector<int>> edges(n);
        for(int i=0;i<edges1.size();i++){
            int u=edges1[i][0];
            int v=edges1[i][1];
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        queue<int> q;
        vector<bool> visited(n,false);
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int i=0;i<edges[u].size();i++){
                int v=edges[u][i];
                if(!visited[v]){
                    q.push(v);
                    visited[v]=true;
                }
            }
        }
        return visited[destination];
    }
};