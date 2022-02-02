class Solution {
public:
    int nr, nc;
    void dfs(int i , int j , vector<vector<char>>&board){
    if( i<0 || j<0 || i==nr || j==nc || board[i][j]!='X'){
        return;
    }
    board[i][j]='.';
    cout<<"i ="<<i<<endl;
    cout<<"j ="<<j<<endl;    
    dfs(i+1,j,board);
    dfs(i-1,j,board);
    dfs(i,j+1,board);
    dfs(i,j-1,board);
           
    }
    int countBattleships(vector<vector<char>>& board) {
        nr=board.size();
        nc=board[0].size();
        int ans=0;
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(board[i][j]=='X'){
                    dfs(i,j,board);
                    ans++;
                    cout<<ans<<endl;
                    
                }
            }
        }
        return ans;
    
    
        
        
    }
    
};