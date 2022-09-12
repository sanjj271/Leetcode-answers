class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int>mp;
    priority_queue<int>max_heap;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    vector<pair<int,int>>v1;
    for(auto s : mp){
        v1.push_back(s);
    }
    sort(v1.begin(),v1.end(),cmp);
    for(auto j : v1){
       ans.push_back(j.first);
        if(ans.size()==k){
            break;
        }
   }
    return ans;
    
    
        
    }
    static bool cmp(pair<int,int>&a , pair<int,int>&b ){
        return (a.second > b.second);
    }
};