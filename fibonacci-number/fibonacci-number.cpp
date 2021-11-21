class Solution {
public:
    vector<int>v1;  
    int fib(int n){
    v1.push_back(0);
    v1.push_back(1);
    for(int i =2 ;i<=n;i++){
        v1.push_back(v1[i-1] + v1[i-2]);
        
    }
    return v1[n];

    
    
        
    }
};