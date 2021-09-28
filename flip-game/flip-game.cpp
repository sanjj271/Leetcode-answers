class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> ans;
        for(int i=1;i<s.length();i++){
            if(s[i-1]=='+' && s[i]=='+'){
            ans.push_back( s.substr(0, i - 1) + "--" + s.substr(i + 1, s.length()));
            }
            
        }
        return ans;
        
        
        
        
    }
};