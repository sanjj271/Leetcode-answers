class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char,int>mp;
        int count=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(i.second%2!=0){
                count++;
            }
        }
        if(count==0||count==1){
            return true;
        }
        return false;
    }
       
      
};