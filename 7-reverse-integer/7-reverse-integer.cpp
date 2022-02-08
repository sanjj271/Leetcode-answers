class Solution {
public:
    int reverse(int x) {
    if(x == 0){
        return x;
    }
    stack<int>st;
    long b=x;
    long num = 0;
    int flag=0;
    long a= 1;
    if(x < 0){
        flag = 1 ;  
        b = -b;
    }
    while( b!=0){
        st.push(b%10); 
        b=b/10;
    }
    while(st.top()==0){
        st.pop();
    }
    while(!st.empty()){
        num = num + st.top() * a;
        a = a*10;
        st.pop();
    }
    if(flag == 1){
        num = -num;
    }
    if( num > 2147483647 || num <  -2147483648 ){
        return 0;
    }
    return num;


    }
    
};