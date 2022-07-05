class Solution {
public:
    int oldcolor;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int nr = image.size();
        int nc= image[0].size();
        oldcolor=image[sr][sc];
        if(oldcolor == color){
            return image;
        }
        dfs(image,sr,sc,color);
    
        return image;
        
        
    }
    void dfs(vector<vector<int>>& image, int row,int col,  int newcolor){
        int nr = image.size();
        int nc= image[0].size();
        image[row][col]=newcolor;
        if(row+1<nr && image[row+1][col]==oldcolor ){
            dfs(image,row+1,col,newcolor);
        }
        if(col+1<nc && image[row][col+1]==oldcolor){
            dfs(image,row,col+1,newcolor);
        }
        if(col-1>=0 && image[row][col-1]==oldcolor){
            dfs(image,row,col-1,newcolor);
        }
        if(row-1>=0 && image[row-1][col]==oldcolor){
            dfs(image,row-1,col,newcolor);
        }
        
        
    }
    
};