class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c) {
    int nr = grid.size();
    int nc = grid[0].size();
    
    grid[r][c]='0';
    if(r+1 <nr && grid[r+1][c] == '1'){
        dfs(grid,r+1,c);  
    }
    if(c+1 <nc && grid[r][c+1] == '1'){
        dfs(grid,r,c+1);  
    }
    if(c-1 >=0 && grid[r][c-1] == '1'){
        dfs(grid,r,c-1);  
    }
    if(r-1 >=0 && grid[r-1][c] == '1'){
        dfs(grid,r-1,c);  
    }
        
    
        
    }
    int numIslands(vector<vector<char>>& grid){
    int nr = grid.size();
    int nc = grid[0].size();  
    int count= 0;
        
    for(int r = 0;r<nr;r++){
        for(int c =0 ; c< nc ;c++){
            if(grid[r][c]=='1'){
                count++;
                dfs(grid,r,c);
            }
        }
    }
    return count;
    }
};