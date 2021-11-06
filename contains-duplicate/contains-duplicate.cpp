class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for (auto j : mp){
        if(j.second >= 2){
            return true;
        }
    }
    return false;
        
        
    }
};