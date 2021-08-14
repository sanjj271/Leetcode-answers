class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
        int z=target-nums[i];
        vector<int>::iterator it;
        it=find (nums.begin(), nums.end(), z);
        if(it!=nums.end()){
            if(it-nums.begin()!=i){
                v.push_back(i);
                v.push_back(it-nums.begin());
                return v;
            }
        }
            
        }
        return v;
        
        
        
        
    }
};