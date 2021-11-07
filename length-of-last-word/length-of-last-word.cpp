class Solution {
public:
    int lengthOfLastWord(string s) {
    vector<string>v;
    int ln = 0;
    stringstream ss(s); 
    string word;
    while(ss >> word){
        v.push_back(word);
    }
    string res=v.back();
    for(int i=0;i<res.length();i++){
        ln++;
    }
    return ln;
    
    
   
        
        
    }
};