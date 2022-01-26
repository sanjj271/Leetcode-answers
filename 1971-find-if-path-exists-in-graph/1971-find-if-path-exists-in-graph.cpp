class Solution {
public:
    //map<int , vector<int>>mp;
    //vector<bool>visited(n,false);
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> mp(n,vector<int>());
        vector<bool>visited(n,false);
        for(int i = 0 ; i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(mp,visited,source,destination);
        
        
        
           
    }
    bool dfs(vector<vector<int>>&mp, vector<bool>&visited , int start , int end){   
        if(start == end){
            return true;
        }
       // if(visited[start]) return false;
        if(mp[start].size()==0){
           return false; 
        } 
        visited[start]=true;
        for(int j = 0 ;j < mp[start].size();j++){
            if(visited[mp[start][j]]==false){
            
            if(dfs(mp,visited,mp[start][j],end)){
                return true;
            }
            }
           
        }
        return false;
        
        
    }
    
    
    
};