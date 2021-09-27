class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size();
        int k=(a*(a+1))/2;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=count+nums[i];
        }
        return k-count;
        
        
        
        
        
        
        
        
   
    }
};