class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        istringstream ss(path);
        string token,result;
        while(getline(ss,token,'/')){
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
        for(auto i :v) result+="/"+i;
        return (v.empty())?"/":result;
            
        
                      
                      
        
    }
};