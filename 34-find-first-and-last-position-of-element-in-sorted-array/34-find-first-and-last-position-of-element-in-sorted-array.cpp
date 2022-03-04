class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>res;
    int a = BinarySearchStart(nums,target);
    int b = BinarySearchEnd(nums,target);
    res.push_back(a);
    
    res.push_back(b);
    return res;
     
    }
    int BinarySearchStart(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size()-1;
    int mid1;
    while(left <= right){
        mid1= left + (right-left)/2;
        if((nums[mid1]==target && mid1 == 0) || (nums[mid1]==target && nums[mid1-1]!=target)){
            return mid1;
        }
        else if(nums[mid1] < target){
            left = mid1 + 1;
        }
        else {
            right = mid1 -1;
        }
    }
    return -1;
   
        
    }
    int BinarySearchEnd(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size()-1;
    int mid2;
    while(left <= right){
        mid2= left + (right-left)/2;
        if((nums[mid2]==target && mid2 == nums.size()-1) || (nums[mid2]==target && nums[mid2+1]!=target)){
            return mid2;
        }
        else if(nums[mid2] <= target){
            left = mid2 + 1;
        }
        else {
            right = mid2 -1 ;
        }
    }
    return -1;
        
    }
    
 
    
  
};