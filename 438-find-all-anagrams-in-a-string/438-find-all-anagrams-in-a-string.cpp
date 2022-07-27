class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    map<char,int>m1;
    map<char,int>mp;
    vector<int>a;
    for(int i=0;i<p.length();i++){
        m1[p[i]]++;
    }
    int j = p.size();
    int i =0;
    for(int k = i; k<j;k++){
            mp[s[k]]++;
    }
    while(j <= s.size()){
        if(m1 == mp){
            a.push_back(i);
        }
        mp[s[i]]--;
        if(mp[s[i]]==0){
            mp.erase(s[i]);
        }
        i++;
        mp[s[j]]++;
        j++; 
        //mp[s[j]]++;
        // for(auto k :mp){
        //     cout<<k.first<<endl;
        //     cout<<k.second<<endl;
        // }
        
    }
    return a;
    
        
    }
};