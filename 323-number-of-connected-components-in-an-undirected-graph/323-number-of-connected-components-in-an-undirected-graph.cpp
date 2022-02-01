class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> mp(n,vector<int>());
        vector<bool>visited(n,false);
        int count =0;
        for(int i = 0 ; i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i =0;i<n ;i++){
            if(visited[i]==false){
               count++;
               dfs(mp,visited,i);
            }
        }
        return count;
            
            
            
        
    
    }
    void dfs(vector<vector<int>>&mp , vector<bool>&visited , int src){
        
        visited[src] = true;
        
        for(int j = 0 ;j < mp[src].size();j++){
            if(visited[mp[src][j]]==false){
                dfs(mp,visited,mp[src][j]);
            }
        
        }
    }
};