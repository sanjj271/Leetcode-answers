class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(iso(s,t) && iso(t,s)){
            return true;
        }
        return false;
    }
    bool iso(string s, string t){
    map<char,char>mp;
    for(int i =0;i<s.size();i++){
        if(!mp[s[i]]){
            mp[s[i]] = t[i];
        }
        else{
            if(mp[s[i]]!=t[i] ){
                return false;
            }
        }
    }
    return true;
        
    }
};