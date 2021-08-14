class Solution {
public:
    int totalMoney(int n) {   
    int a=n/7;
    float b=n%7;
    float sum;
    float res=(b/2)*(2*(a+1)+(b-1));    
   
        if(a>0){
     sum= 28*(a)+(7*(a*(a-1))/2)+res;
    }
        else{
            sum=res;
        }
        
    
        
    return int(sum);    
    }
};