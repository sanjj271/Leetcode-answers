class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        map<string,char>m;
        map<char,string>::iterator it;
         map<string,char>::iterator it1;
        vector<string> v1;
        stringstream ss(s);
        string token;
        
        while(getline(ss, token, ' ')){
            v1.push_back(token);
        }
        if(v1.size()!=pattern.length()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            it = mp.find(pattern[i]);
          if (it != mp.end()){
             if( it->second!=v1[i]){
                 return false;
             }
          }
            else{
                mp.insert({pattern[i],v1[i]});
                it1 = m.find(v1[i]);
                if (it1 != m.end()){
                    return false;
                }
                else{
                    m.insert({v1[i],pattern[i]});
                }
            
            }
            
              
        }
        return true;
    }
};