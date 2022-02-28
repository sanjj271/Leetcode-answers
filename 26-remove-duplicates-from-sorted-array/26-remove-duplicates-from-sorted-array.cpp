class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j = 0;
    for(int i =1;i<nums.size();i++){
    while(i<nums.size() && nums[i-1]==nums[i]){
        i++;
    }
    if(i!=nums.size()){
    j++;
    nums[j]=nums[i]; 
    }
    }
    return j+1;
        
        
    }
};