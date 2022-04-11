class Solution {
public:
    void sortColors(vector<int>& nums) {
    map<int,int>mp;
    for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    nums.clear();
    for(auto j : mp){
        for(int i = 0; i < j.second;i++){
            nums.push_back(j.first);    
        }
    }
        
        
    }
};