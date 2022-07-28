class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>mp;
    int count=0;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int j =0;j<t.size();j++){
        if(mp.find(t[j])!=mp.end()){
            mp[t[j]]--;
            if(mp[t[j]]==0){
                mp.erase(t[j]);
            }
        }
        else if(mp.find(t[j])==mp.end()){
            count++;
        }
        
    }
    cout<<"reached"<<endl;

    if(mp.size()==0 && count == 0){
        return true;
    }
    cout<<mp.size();
    return false;
        
    }
};