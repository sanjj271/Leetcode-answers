class Solution {
public:
    map<int,int> mp;
    int tribonacci(int n) {
   // map<int,int> mp;
    if(n==0){
        return 0;
    }
    if( n==1 || n==2){
        return 1;
    }
    if(mp.find(n)==mp.end()){
      mp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
    return mp[n];
        
        
    }
};