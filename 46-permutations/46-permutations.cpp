class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>res;
    do{
    vector<int>v1;
    for(int i =0;i<nums.size();i++){
        v1.push_back(nums[i]);
    }
    res.push_back(v1);
    }
    while(next_permutation(nums.begin(),nums.end()));
    
    return res;
    
        
    }
};