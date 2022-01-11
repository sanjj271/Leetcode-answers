class Solution {
public:
    int count;
    void dfs(vector<vector<int>>& rooms, vector<bool> &vis, int node){
        vis[node]=true;
        count++;
        for(auto i:rooms[node]){
            if(vis[i]==false)
                dfs(rooms,vis,i);
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        count=0;
        vector<bool> vis(n,false);
        //vis[0]=true;
        dfs(rooms,vis,0);
        cout<< count;
        if(count==n) return true;
        return false;
    }

};