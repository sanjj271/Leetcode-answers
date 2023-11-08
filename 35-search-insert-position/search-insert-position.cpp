class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()-1;
    // if(nums[right]<target){
    //     return right+1;
    // }
    // if(nums[left]>target){
    //     return left -1;
    // }
    while(left<=right){
        int mid = left + (right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>=target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }

    }
    return left;
    }
};