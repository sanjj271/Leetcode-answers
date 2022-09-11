class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
    map<string,vector<string>>mp;
    vector<vector<string>>ans;
    for(int i =0;i<paths.size();i++){
        stringstream ss(paths[i]);
        string word;
        string root;
        //ss>>root;
        getline(ss,root,' ');
        while(getline(ss,word,' ')){
            int a =word.find('(',0);
            int b = word.find(')',a);
            string x = word.substr(0,a);
            string y = word.substr(a+1,b);   
            mp[y].push_back(root+"/"+x);
        }
        
    }
    for(auto j : mp){
        if(j.second.size()>1){
        ans.push_back(j.second);
        }
    }
    return ans;
        
        
    }
    
};