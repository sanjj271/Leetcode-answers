class Solution {
public:
    map<int,vector<int>>mp;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<bool>visited(n,false); 
    for(int i=0;i<edges.size();i++){
        mp[edges[i][0]].push_back(edges[i][1]);
        mp[edges[i][1]].push_back(edges[i][0]);
    }
    return dfs(source,destination,visited);
    }
    bool dfs(int source, int destination, vector<bool>&visited){
    if(source == destination){
        return true;
    }
    visited[source] = true;
    for(int i =0;i<mp[source].size();i++){
        if(!visited[mp[source][i]]){
            if(dfs(mp[source][i],destination,visited)){
                return true;
            }
            // else{
            //     visited[mp[source][i]]=false;
            // }
        }
    }
    return false;
    
        
    }
    
    
    
        
        
        
    
};