class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r = matrix.size();
    int c = matrix[0].size()-1;
    for(int i =0;i<matrix.size();i++){
        if(matrix[i][c]>=target){
            cout<<matrix[i][c];
            return BinarySearch(matrix[i],target);
        }
    }
    return false;
    
        
    }
    bool BinarySearch(vector<int>nums , int target){
    int l = 0;
    int h = nums.size()-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[mid]>target){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return false;

    }

};