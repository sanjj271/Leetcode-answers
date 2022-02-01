class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    //map<int,vector<int>>mp;
    vector<vector<int>> mp(n,vector<int>());
    vector<bool>visited(n,false);
    for(int k = 0 ; k < edges.size();k++){
        mp[edges[k][0]].push_back(edges[k][1]);
        mp[edges[k][1]].push_back(edges[k][0]);    
    }
    return dfs(mp,visited,source,destination);
        
        
    }
    bool dfs(vector<vector<int>>&mp , vector<bool>&visited , int start , int end){
        if(start == end){
            return true;
        }
        visited[start]=true;
        for(int j = 0 ; j<mp[start].size();j++){
            if(visited[mp[start][j]]==false){
                if(dfs(mp,visited,mp[start][j],end)){
                    return true;
                }
            }
        }
        return false;
    }
};