#include<iostream>
using namespace std;
#include<vector>
#include<map>

vector<int> ReassignedPriorities(vector<int> priorities){
    vector<int> res;
    vector<int> vec;
    vec=priorities;
    map<int,int> mp;
    sort(priorities.begin(), priorities.end());
    auto last = unique(priorities.begin(), priorities.end());
    priorities.erase(last,priorities.end());
    for(int j=0;j<priorities.size();j++){
        mp[priorities[j]]=j+1;
    }
    for(int k=0;k<vec.size();k++){
        res.push_back(mp[vec[k]]);
    }
    return res;
    
    
    
    
}
int main(){
    std::vector<int> v{1,3,7,3};
    std::vector<int> r=ReassignedPriorities(v);
    for(int i=0;i<r.size();i++){
        std::cout<<r[i]<<" "<<std::endl;
    }
    
}
