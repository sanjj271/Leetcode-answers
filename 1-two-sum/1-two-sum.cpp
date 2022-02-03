class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>res;
    map<int,int>mp;
    int diff;
    for(int i=0;i<nums.size();i++){
       diff = target - nums[i];
       if(mp.find(diff)!=mp.end()){
           res.push_back(i);
           res.push_back(mp[diff]);
       }
       else{
           mp[nums[i]]=i;
       }
        
    }
    return res;
        
        
    
        
    }
};