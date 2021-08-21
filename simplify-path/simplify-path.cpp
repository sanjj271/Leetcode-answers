class Solution {
public:
    string simplifyPath(string path) {
        vector<string>v;
        istringstream ss(path);
        string token;
        string res;
        while(getline(ss, token,'/')){
            if(token==""||token=="."){
                continue;
            }
            if(token!=".."){
                v.push_back(token);
            }
            else if(!v.empty()){
                v.pop_back();
            }
            
            
        }
        for(auto j:v) res=res+"/"+j;
        return (v.empty())?"/":res;
        
        
        
        
        
        
    }
};