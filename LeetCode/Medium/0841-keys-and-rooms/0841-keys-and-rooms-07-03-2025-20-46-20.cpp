class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        //bfs
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
        // for(int i=0;i<rooms.size();i++){//全部房间中是否有房间没有打开，若有则返回false，
        //     if(!visited[i])
        //         return false;
        // }
        //return true;
        return num==rooms.size();//判断打开的房间数和所有房间数是否相等
    }
};
