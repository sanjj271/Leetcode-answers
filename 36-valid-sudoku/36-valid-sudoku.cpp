class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    int r = board.size();
    int c = board[0].size();
    for(int i = 0; i < r;i++ ){
         map<int,int>mp;
        for(int j =0;j<c;j++){
            if(board[i][j]!='.'){
            if(mp.count(board[i][j])){
                return false;    
            }
            else{
                mp[board[i][j]]++;
            }
            }

    }  
    }
    for(int j = 0; j < c;j++ ){
         map<int,int>mp;
        for(int i =0;i<r;i++){
            if(board[i][j]!='.'){
            if(mp.count(board[i][j])){
                return false;    
            }
            else{
                mp[board[i][j]]++;
            }
            }

    }  
    }
    for(int i =0; i< r; i=i+3){
        for(int j=0;j<c;j=j+3){
             map<int,int>mp;
            for(int m =i;m < i+3 ;m++){
                for(int k =j;k<j+3;k++){
                    if(board[m][k]!='.'){
                        if(mp.count(board[m][k])){
                            return false;
                        }
                        else{
                              mp[board[m][k]]++;
                            }
                    }
                }
            }
            
            
        }
    }
    return true;
    
    
   }
        
};