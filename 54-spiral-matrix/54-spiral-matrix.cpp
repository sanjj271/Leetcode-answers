class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> vec;
    int row = matrix.size();
    int column = matrix[0].size();
    int left = 0;
    int right = column -1;
    int top = 0;
    int bottom = row-1;
    int dir = 0;
    if(row == 0){
        return vec;
    }
    while(left<= right && top<=bottom){
        if(dir == 0){
            for(int i =left; i<=right; i++){
                cout<<matrix[top][i]<<endl;
                vec.push_back(matrix[top][i]);
            }
            dir = 1;
            top++;
        }
        else if(dir == 1){
            for(int i = top ; i<= bottom;i++){
                 cout<<matrix[i][right]<<endl;
                vec.push_back(matrix[i][right]);
            }
            dir = 2;
            right --;
            
        }
        else if(dir ==2){
            for(int i =right;i>=left;i--){
                 cout<<matrix[bottom][i]<<endl;
                vec.push_back(matrix[bottom][i]);
            }
            dir = 3;
            bottom --;
            
        }
        else if( dir ==3){
            for(int i = bottom ; i >= top;i--){
                 cout<<matrix[i][left]<<endl;
                vec.push_back(matrix[i][left]);
            }
            dir = 0;
            left++;
        }
        
    }
    return vec;
        
    }
};