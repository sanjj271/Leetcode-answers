class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int>indegree(numCourses,0);
    map<int,vector<int>>mp;
    vector<int>ans;
    vector<int>ans2;
    set<int>s;
    int count=0;
    int finalcount =0;
    int flag =0;
    for(int i =0;i<prerequisites.size();i++){
      mp[prerequisites[i][1]].push_back(prerequisites[i][0]);
      indegree[prerequisites[i][0]]++;
        
    }
    for( auto map_iter = mp.cbegin() ; map_iter != mp.cend() ; ++map_iter )
        {
            std::cout << "key: " << map_iter->first << "  value: [  " ;
            for( auto vec_iter = map_iter->second.cbegin() ; vec_iter != map_iter->second.cend() ; ++vec_iter )
                std::cout << *vec_iter << "  " ;
            std::cout << "]\n" ;
        }
    for(int i=0;i<indegree.size();i++){
        cout<<indegree[i]<<endl;
        if(indegree[i]==0){
            count++;
        }
    }
    if(count==0){
        return ans;
    }
    else{
    while(finalcount!=numCourses){
        flag =0;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0 && s.find(i)==s.end()){
        flag =1;
        ans.push_back(i);
        s.insert(i);
        finalcount++;   
        for(int j =0;j<mp[i].size();j++){
            indegree[mp[i][j]]--;
        }
        }
        if(finalcount==numCourses){
            break;
        }
        
        }
        if(flag ==0){
            return ans2;
        }
        
        
        
    }
    }
    return ans;
    }
    
    
    
    
    
    
    
    
};