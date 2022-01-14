class Solution {
public:
    map<int,int>mp;
    int minCostClimbingStairs(vector<int>& cost) {
        return helper(cost,cost.size());
        
        
        
        
        
    }
    int helper(vector<int>& cost , int k){
        if(k<=1){
            return 0;
        }
        if(mp.find(k)==mp.end()){
        int cost1 = cost[k-1] + helper(cost, k-1);
        int cost2 = cost[k-2] + helper(cost, k-2);
        mp[k]= min(cost1,cost2);
        }
        return mp[k];
    }
};