class Solution {
public:
    map<int,int>mp;
    int rob(vector<int>& nums) {
      return helper(nums, nums.size()-1);
    
       
    }
    int helper(vector<int>& nums , int i){
    if(i==0) {
        return nums[0];
    }
    if(i==1) {
        return max(nums[0],nums[1]);
    }
    if(mp.find(i)==mp.end()){
    int cost1= helper(nums,i-1);
    int cost2 = nums[i] + helper(nums, i-2);
    mp[i]=max(cost1,cost2);
    }
    return mp[i];    
        
    }
};