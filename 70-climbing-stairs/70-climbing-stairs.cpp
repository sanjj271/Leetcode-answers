class Solution {
public:
    map<int,int>mp;
    int climbStairs(int n) {
    if(n==1){
        return 1;
    }
    if(n == 0){
        return 1;
    }
    else{
        if(mp.find(n)==mp.end()){
        mp[n] =  climbStairs(n-1) + climbStairs(n-2);
        }
        return mp[n];
    }
   

        
    }
};