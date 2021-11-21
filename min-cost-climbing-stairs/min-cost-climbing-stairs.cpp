class Solution {
public:
    map<int,int>mp;
    int minCostClimbingStairs(vector<int>& cost) {
    
     
    return costcount(cost, cost.size());
        
        
 
        
        
        
    }
    int costcount(vector<int>& cost, int i){
    if(i <=1 ){
        return 0;
    }
    if(mp.find(i)==mp.end()){
    int a = cost[i-1] + costcount(cost,i-1);
    int b = cost[i-2] + costcount(cost,i-2);
    mp[i]=min(a,b);
    }
    return mp[i];
    
        } 
};