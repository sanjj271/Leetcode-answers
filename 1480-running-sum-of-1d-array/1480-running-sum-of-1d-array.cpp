class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    vector<int>res;
    res.push_back(nums[0]);
    for(int i =1;i<nums.size();i++){
        int c = res[i-1]+nums[i];
        res.push_back(c);
    }
    return res;
        
    }
};