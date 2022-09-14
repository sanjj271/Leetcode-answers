class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    vector<int>v1;
    v1 = nums;
    int a;
    sort(nums.begin(),nums.end());
     a = nums[nums.size()-1];
    for(int i=0;i<nums.size()-1;i++){
        if(a < nums[i]*2){
            return -1;
        }
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]==a){
            return i;
        }
    }
    return 0;
        
    }
};