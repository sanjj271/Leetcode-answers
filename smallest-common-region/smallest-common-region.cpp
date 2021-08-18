class Solution {
public:
    string findSmallestRegion(vector<vector<string>>& regions, string region1, string region2) {
        map<string,string> mp;
        vector<string> v1;
        vector<string> v2;
        for(int i=0;i<regions.size();i++){
            for(int j=1;j<regions[i].size();j++){
                mp[regions[i][j]]=regions[i][0];
                
            }
        }
        while(region1.size()!=0){
            v1.push_back(region1);
            region1=mp[region1];
        }
        while(region2.size()!=0){
            v2.push_back(region2);
            region2=mp[region2];
        }
        for(auto k:v1){
            for(auto m:v2){
                if(k==m){
                    return k;
                }
            }
        }
        return "";
        
        
        
        
        
        
        
        
        
    
    }
};