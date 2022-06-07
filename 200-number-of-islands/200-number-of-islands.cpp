class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
    int nr =grid.size();
    int nc=grid[0].size();
    int count =0;
     for(int i =0;i<nr;i++){
         for(int j = 0;j<nc;j++){
             if(grid[i][j]=='1'){
                 count++;
                 DFS(grid,i,j);
             }
         }
     }
    return count;
      
    }
    void DFS(vector<vector<char>>& grid, int row, int col){
    int nr = grid.size();
    int nc = grid[0].size();
    
    grid[row][col]='0';
    if(row+1<nr && grid[row+1][col]=='1'){
        DFS(grid,row+1,col);
    }
    if(col+1<nc && grid[row][col+1]=='1'){
        DFS(grid,row,col+1);
    }
    if(col-1>=0 && grid[row][col-1]=='1'){
        DFS(grid,row,col-1);
    }
    if(row-1>=0 && grid[row-1][col]=='1'){
        DFS(grid,row-1,col);
    }
    }
    
    
    
};