class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
    map<int,int>mp;
    int res =0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int prod = nums[i]*nums[j];
            mp[prod]++;
        }
    }
    for(auto m : mp){
        int n = m.second;
        res = res + (n*(n-1))/2;
        
    }
    return res*8;
        
        
        
        
        
    }
    
};