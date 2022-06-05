class Solution {
public:
    int count =0;
    int abc=0;
    vector<vector<int>>board;
    int totalNQueens(int n) {
    board.assign(n, vector<int>(n, 0));
    Solvee(0,board,n);
    return count;
    
    
  
    }
    bool isSafe(int row, int col,vector<vector<int>>board,int n){
    cout<<row<<" "<<col<<" "<<endl;
    int i;
    int j;
    for( i =0 ;i< col;i++){
        if(board[row][i] == 1){
            return false;
        }   
    }
    for( i = row, j = col;i>=0 && j>=0;i--,j--){
            if(board[i][j]==1){
                return false;
            }
            
        
    }
    for( i = row , j = col;i<n && j>=0;i++,j--){
            if(board[i][j]==1){
                return false;
            }
        
    }
    return true;
    
        
    }
    void Solvee(int col,vector<vector<int>>&board,int n){
        if(col >=n){
           count++;
        }
        for(int i =0; i<n;i++){
            if(isSafe(i,col,board,n)){
                board[i][col]=1;
                Solvee(col+1,board,n);
                board[i][col]=0;
                
            }
        }
        
    }
        
    
};