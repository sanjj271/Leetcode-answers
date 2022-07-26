class Solution {
public:
    int longestPalindrome(string s) {
    map<char,int>mp;
    int flag =0;
    int ans=0;
    for(int i =0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto j : mp){
        if(j.second %2!=0){
            flag =1;
            ans = ans + j.second-1;
        }
        else{
        ans = ans+j.second;
        }
        
    }
    if(flag == 1){
        return ans+1;
    }
    else{
        return ans;
    }
    
        
    }
};