class Solution {
public:
    queue<pair<int, int> >q;
    int orangesRotting(vector<vector<int>>& grid) {
    int minutes=0;
    int r = grid.size();
    int c = grid[0].size();
    int count =0;
    for(int i =0;i<grid.size();i++){
        for(int j =0;j<grid[i].size();j++){
            if(grid[i][j]==1){
                count++;
            }
            else if(grid[i][j]==2){
                q.push({ i, j });
            }
        } 
    }
    if(q.empty() && count>0){
        return -1;
    }
    else if(q.empty()){
        return minutes;
    }
    else if(count == 0){
        return 0;
    }
    while(!q.empty()){
        int s = q.size();
        for(int i =0;i<s;i++){
            pair<int,int>p1 = q.front();
            int f = p1.first;
 
    // Gives second element from queue pair
    int s = p1.second;
 
    cout << "(" << f << ", " << s << ") "<<endl;

            q.pop();
            markrotten(grid,p1);
        }
        minutes++;
    }
    for(int i =0;i<grid.size();i++){
        for(int j =0;j<grid[i].size();j++){
            if(grid[i][j]==1){
                return -1;
            }
        } 
    }
    return minutes-1;
    
    
        
    }
    void markrotten(vector<vector<int>>& grid, pair<int,int>p1){
    int r = grid.size();
    int c = grid[0].size();
    int x = p1.first;
    int y = p1.second;
    if(y+1<c && grid[x][y+1]==1){
        grid[x][y+1]=2;
        q.push({ x, y+1 });
        
    }
     if(x+1<r && grid[x+1][y]==1){
        grid[x+1][y]=2;
        q.push({ x+1, y });
        
    }
     if(x-1>=0 && grid[x-1][y]==1){
        grid[x-1][y]=2;
        
        q.push({ x-1, y });
        
    }
     if(y-1>=0 && grid[x][y-1]==1){
        grid[x][y-1]=2;
        
        q.push({ x, y-1 });
    }
    
    
    }
};

