class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>>edge(n);
        for(int i=0;i<edges.size();i++){
            // bool f=false;
            // for(auto j:restricted){
            //     if(edges[i][0]==j||edges[i][1]==j){
            //         f=true;
            //     }       
            // }
            // if(f){
            //     continue;
            // }  
            int x=edges[i][0];
            int y=edges[i][1];
            edge[x].push_back(y);
            edge[y].push_back(x);
            //cout<<x<<","<<y<<endl;
        }
        queue<int> q;
        vector<bool> visited(n,false);
        q.push(0);
        visited[0]=true;
        for(auto j:restricted){
                visited[j]=true;     
        }
        int count=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            count++;
            for(int i=0;i<edge[u].size();i++){
                int v=edge[u][i];
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        return count;
    }
};