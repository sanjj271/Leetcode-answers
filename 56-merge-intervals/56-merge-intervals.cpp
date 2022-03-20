class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> res;
    vector<vector<int>> ans;
    int flag = 0;
    res = intervals;
    sort(res.begin(),res.end());
    int i =0;
    int count =0;
    while(true){
    while(i <= res.size()-1){
    if((i!= res.size()-1) && res[i][1] >= res[i+1][0] && res[i][1] >= res[i+1][1]){
        count++;
        vector<int>lol;
        lol.push_back(res[i][0]);
        lol.push_back(res[i][1]);
         //ans.push_back(lol);  
         res[i+1]=lol;
         i++;
        
    }
    else if((i!= res.size()-1) && res[i][1] >= res[i+1][0]){
        count++;
        vector<int>lol;
        lol.push_back(res[i][0]);
        lol.push_back(res[i+1][1]);
        //ans.push_back(lol);
        res[i+1]=lol;
        i++;
    }
    else if((i!= res.size()-1) && (res[i][0] == res[i+1][0]) && (res[i][1] <= res[i+1][1]) ){
        count++;
        cout<<"Im here"<<endl;
        vector<int>lol;
        lol.push_back(res[i][0]);
        lol.push_back(res[i+1][1]);
        res[i+1]=lol;
        i++;
    }
    else{
    ans.push_back(res[i]);
    i++;
    }   
    }
    cout<<count<<endl ;
    if(count == 0){
       
        break;
    }
    else{
        
        count =0;
    }
    }
    
    sort(ans.begin(),ans.end()) ;
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
    return ans;
        
        
    }
};