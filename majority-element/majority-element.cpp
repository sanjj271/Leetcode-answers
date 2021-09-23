class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //int comp = (nums.size()/2);
        map<int,int> mp;
        for(auto i :nums){
            mp[i]++;
        }
        
        for(auto i: mp){
            if(mp[i.first] > (nums.size()/2))
               return i.first;
        }
        
        return 0;
        
    }
};