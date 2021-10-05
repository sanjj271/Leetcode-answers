class Solution {
public:
    bool wordPattern(string pattern, string s) {
    map<char,string> mp;
    map<string,char> mpp;
    vector<string> v;
    //getline(cin,s);
    istringstream iss(s);
    string word;
    while(iss >> word) {
        v.push_back(word);
   
    }
    if(pattern.length()!=v.size()){
        return false;
    }
    for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }        
            }
            else{
                mp[pattern[i]]=v[i];
                
            }
        
        
        
    }
    for(int i=0;i<v.size();i++){
            if(mpp.find(v[i])!=mpp.end()){
                if(mpp[v[i]]!=pattern[i]){
                    return false;
                }        
            }
            else{
                mpp[v[i]]=pattern[i];
                
            }
    }
    return true;
    }
        
            
    
};