class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        map<int, int> mpp;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            mpp[nums2[j]]++;
        }
        for(auto i : mp){
            for(auto j :mpp){
                if(i.first == j.first){
                ans.push_back(i.first);
                ans.push_back(j.first);   
                
            }
        }
        }
        ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        return ans;
        
        
        
        
        
        
        
        
        
    }
};