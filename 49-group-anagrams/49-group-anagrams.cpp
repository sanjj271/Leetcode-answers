class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,vector<string>>mp;
    vector<vector<string>>res;
    for(int i =0;i<strs.size();i++){
    string g = strs[i];
    sort(g.begin(),g.end());
    mp[g].push_back(strs[i]);
    }
    for(auto j : mp){
        res.push_back(j.second);
    }
    return res;
    
   
        
    
        
    }
};