class Solution {
public:
   int oldcolor;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int nr = image.size();
    int nc = image[0].size();
    oldcolor=image[sr][sc];
    if(oldcolor == color){
        return image;
    }
    Dfs(image,sr,sc,color);
    return image;
    
    
     
        
    }
    void Dfs(vector<vector<int>>& image, int i,int j,int newcolor){
     int nr = image.size();
     int nc = image[0].size();
     image[i][j]=newcolor;
     if(i-1>=0 && image[i-1][j]==oldcolor){
         Dfs(image,i-1,j,newcolor);
     }
    if(i+1 <nr &&image[i+1][j]==oldcolor){
        Dfs(image,i+1,j,newcolor);
    }
    if(j-1>=0 && image[i][j-1]==oldcolor){
        Dfs(image,i,j-1,newcolor);
    }
    if(j+1<nc && image[i][j+1]==oldcolor){
        Dfs(image,i,j+1,newcolor);
    }
    }
};