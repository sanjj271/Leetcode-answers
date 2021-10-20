class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>v1;    
    map<int,int>mp;
    int diff=0;
    for(int i =0;i<nums.size();i++){
        diff=target-nums[i];
        if(mp.find(diff)!=mp.end()){
            v1.push_back(i);
            v1.push_back(mp[diff]);
        }
        else{
            mp[nums[i]]=i;
        }
    
        
    }
    return v1;
    
     
        
     
    }
};