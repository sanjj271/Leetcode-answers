class Solution {
public:
    vector<string> letterCombinations(string digits) {
    map<char,string>mp;
    vector<string>res;
    vector<string>temp;
    string s = "";
    mp.insert({ '2', "abc" });
    mp.insert({ '3', "def" });
    mp.insert({ '4', "ghi" });
    mp.insert({ '5', "jkl" });
    mp.insert({ '6', "mno" });
    mp.insert({ '7', "pqrs" });
    mp.insert({ '8', "tuv" });
    mp.insert({ '9', "wxyz" });
    string str="";
        
    if(digits.size()==0){
        return res;
    }

    if(digits.size()==1){
        for(int i=0;i<mp[digits[0]].size();i++){
            str = str + mp[digits[0]][i];
            res.push_back(str);
            str="";
        }
     return res;
    }
    else{
        res = letterCombinations(digits.substr(1));
        for(int i =0;i<mp[digits[0]].size();i++){
            for(int j =0;j<res.size();j++){
                s = s+ mp[digits[0]][i]+res[j];
                temp.push_back(s);
                s="";
            }
        }
        return temp;
        
    }
   
        
        
    
        
    
        
    
    
        
        
    
    
        
        
    }
};