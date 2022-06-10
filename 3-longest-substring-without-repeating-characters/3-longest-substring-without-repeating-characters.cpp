class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    map<char,int>mp;
    int i=0;
    int j=0;
    int a =0;
    while(j<s.length()){
      mp[s[j]]++;
      if(mp.size()==(j-i+1)){
          int b = mp.size();
          a = max(a,b);
          cout<<a<<endl;
      }
      if(mp.size()<(j-i+1)){
          mp[s[i]]--;
          if(mp[s[i]]==0){
              mp.erase(s[i]);
              //it=mp.find(s[i]);
              //mymap.erase (it);  
          }
          i++;
      }
      j++;
      
    }
     for(auto m :mp){
              cout<<m.first<<" "<<m.second<<endl;
          }
    return a;
    
        
    
    
    
        
    
        
    }
};