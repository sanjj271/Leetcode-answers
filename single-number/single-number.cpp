class Solution {
public:
    int singleNumber(vector<int>& nums) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto j :mp){
        if(j.second == 1){
            return j.first;
        }
    }
    return 0;
    
        
        
    }
};