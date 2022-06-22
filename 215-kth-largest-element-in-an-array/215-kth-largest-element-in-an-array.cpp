class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0];
        }
        for(int i =0;i<=k-1;i++){
            for(int j = 0; j<nums.size()-i-1;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int k =0;k<nums.size();k++){
            cout<<nums[k]<<endl;
        }
        return nums[nums.size()-k];
        
    }
    
};