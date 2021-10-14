class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<string> newstr;
    map<string,vector<string>>mp;
     vector<vector<string>>j;
    newstr =strs;
        
    for(int i=0;i<strs.size();i++){
    sort(strs[i].begin(), strs[i].end());
    }
    for(int i=0;i<strs.size();i++){
        mp[strs[i]].push_back(newstr[i]);
    }
    for(auto k :mp){
        j.push_back(k.second);
    }
    return j;
    
    
    
    
    
    
    
    }
};