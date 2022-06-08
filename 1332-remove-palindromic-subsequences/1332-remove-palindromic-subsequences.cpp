class Solution {
public:
    int removePalindromeSub(string s) {
    string g =s;
    reverse(s.begin(), s.end()); 
    if(g == s){
        return 1;
    }
    return 2;
    
    
    
    }
};