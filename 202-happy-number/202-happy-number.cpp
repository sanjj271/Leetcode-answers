class Solution {
public:
    bool isHappy(int n) {
    set<int> s1;
    while(true){
    int b =   sumofsquares(n);
    if(b == 1){
       return true;   
    }
    else if(s1.find(b)!=s1.end()){
        return false;
    }
    s1.insert(b);
    n =b;  
    } 
    
    }
    int sumofsquares (int a){
    int square=0;
    while(a!=0){
    int r = a%10;
    square =  square + r*r;
    a = a/10;
    }
    return square;
    
    
        
        
    }
};