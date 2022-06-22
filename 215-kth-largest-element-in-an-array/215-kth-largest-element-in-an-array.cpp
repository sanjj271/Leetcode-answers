class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int temp;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i =0;i<=k-1;i++){
            for(int j = 0; j<nums.size()-i-1;j++){
                if(nums[j] > nums[j+1]){
                   temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        
        return nums[nums.size()-k];
        
    }
    
};