class Solution {
public:
    map<int,int> mps;
    int deleteAndEarn(vector<int>& nums) {
    map<int,int>mp;
   // vector<int> m();
    map<int, int>::iterator it;
    map<int, int>::iterator itr;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    int  a = mp.rbegin()->first;
    vector<int> m(a+1,0);
    for (it = mp.begin(); it != mp.end(); it++){
        m[it->first] = it->first;
    }
    for(int k =0;k<m.size();k++){
        cout<<m[k]<<endl;
    }
    return helper(m , mp , m.size()-1);
  
        
        
    }
    int helper(vector<int> v1 , map<int,int>& mp , int i){
    if(i ==0){
        //cout<<mp[v1[0]]<<endl;
        return v1[0]*mp[v1[0]];
    }
    if(i == 1){
        return max(v1[1]*mp[v1[1]],v1[0]*mp[v1[0]]);    
    }
    if(mps.find(i)==mps.end()){
    int cost1 = helper(v1 , mp , i - 1);
    int cost2 = v1[i]*mp[v1[i]] + helper(v1 , mp , i - 2);
    mps[i]= max(cost1,cost2);
    }
    return mps[i];
    
       
        
    }
    
    
};