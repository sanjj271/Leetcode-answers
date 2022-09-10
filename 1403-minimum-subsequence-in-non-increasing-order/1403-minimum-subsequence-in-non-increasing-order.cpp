class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
    int currsum =0;
    int totalsum=0;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        totalsum = totalsum+nums[i];  
    }
    sort(nums.begin(),nums.end());
    for(int i =nums.size()-1;i>=0;i--){
        currsum = currsum + nums[i];
        totalsum = totalsum-nums[i];
        ans.push_back(nums[i]);
        if(currsum > totalsum){
            break;
        }
        
    }
    return ans;
    
        
        
    }
};