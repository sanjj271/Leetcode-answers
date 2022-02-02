class Solution {
public:
    int nr,nc;
    int islandPerimeter(vector<vector<int>>& grid) {
        nr = grid.size();
        nc=grid[0].size();
        int i,j,res=0;
        for(i=0;i<nr;i++) {
            for(j=0;j<nc;j++) {
                if(grid[i][j]==1) {
                    res+=4;
                    res= res - isConnected(grid,i-1,j);
                    res= res - isConnected(grid,i+1,j);
                    res= res - isConnected(grid,i,j-1);
                    res= res - isConnected(grid,i,j+1);
                }
            }
        }
        return res;
        
        
    }
    int isConnected(vector<vector<int>>& grid, int i, int j) {
        if(i<0 || j<0 || i==nr || j==nc){
            return 0;
        }
        return grid[i][j]==1;
    }
};