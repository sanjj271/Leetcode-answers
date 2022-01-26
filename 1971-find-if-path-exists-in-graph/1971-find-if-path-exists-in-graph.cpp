class Solution {
public:
    bool dfs(vector<vector<int>>& map, vector<int>& visited, int source, int destination){
        if(visited[source]) return false;
        if(source==destination) return true;
        if(map[source].size()==0) return false;
        
        visited[source]=1;
        for(int i=0;i<map[source].size();i++){
            if(dfs(map,visited,map[source][i],destination)) return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> map(n,vector<int>());
        vector<int> visited(n,0);
        for(int i=0;i<edges.size();i++){
            map[edges[i][0]].push_back(edges[i][1]);
            map[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(map,visited,source,destination);
    }
};