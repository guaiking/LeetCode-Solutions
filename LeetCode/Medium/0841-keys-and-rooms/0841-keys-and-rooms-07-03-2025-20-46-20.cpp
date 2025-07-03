class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        vector<bool> visited(rooms.size(),false);
        int s=0,num=0;
        q.push(s);
        visited[s]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            num++;
            for(int i=0;i<rooms[u].size();i++){
                int v=rooms[u][i];
                if(!visited[v]){
                    q.push(v);
                    visited[v]=true;
                }
            }
        }
        // for(int i=0;i<rooms.size();i++){
        //     if(!visited[i])
        //         return false;
        // }
        //return true;
        return num==rooms.size();
    }
};