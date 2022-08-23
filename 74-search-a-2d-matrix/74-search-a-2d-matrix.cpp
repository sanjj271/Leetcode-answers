class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r = matrix.size();
    int c = matrix[0].size();
    for(int i = 0; i<r; i++){
        if(matrix[i][c-1]>target){
            return BinarySearch(matrix[i],target);
        }
        else if(matrix[i][c-1]==target){
            return true;
        }
    }
    return false;
        
    }
    bool BinarySearch(vector<int>v1, int target){
    int l =0;
    int r = v1.size();
    int mid;
    while(l<=r){
         mid = l + (r-l)/2;
        if(v1[mid] == target){
            return true;
        }
        else if(v1[mid] > target){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return false;
    }
    
    
};