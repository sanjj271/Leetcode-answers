class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> mp;
    for(auto i: strs){
            string temp = i;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
      vector<vector<string>>res;
      for(auto j :mp){
          res.push_back(j.second);
      }
      return res;
    
    

    
    
    
    

        
        
        

    
        
        
        
        
    }
};