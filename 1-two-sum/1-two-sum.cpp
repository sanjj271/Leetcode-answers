class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int diff = target - nums[i];
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