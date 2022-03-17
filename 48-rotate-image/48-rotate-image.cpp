class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    vector<int>v1;
    int r = matrix.size();
    int c = matrix[0].size();
    for(int i =0;i<r;i++){
        for(int j =0;j<c ;j++){
            v1.push_back(matrix[i][j]);
        }
    }
    int i = v1.size()-1;
    for(int k = 0;k<c;k++){
        for(int l = r-1;l>=0;l--){
            cout<<v1[i]<<endl;
            matrix[l][k]=v1[i];
            i --;
    
            
}
    }
        
    
        
    }
};