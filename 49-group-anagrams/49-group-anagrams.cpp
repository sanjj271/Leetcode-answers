class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>res;
    map<string,vector<string>>mp;
    for(int i =0;i<strs.size();i++){
    string a = strs[i];
    sort(a.begin(), a.end());
    mp[a].push_back(strs[i]);
    }
    for(auto j : mp){
        res.push_back(j.second);
    }
    return res;
    
    
        
        
        
        
   
    }
};