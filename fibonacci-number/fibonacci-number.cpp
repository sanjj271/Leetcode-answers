class Solution {
public:
    map<int,int>mp;
    int fib(int n) {
      //map<int,int>mp;
      if(n==0 || n==1){
          return n;
      }
      if(mp.find(n)==mp.end()){
          mp[n] = fib(n-1) + fib(n-2);
      }
    return mp[n];
         
    

         
        

      
     
        
        
        
        
    }
};