class Solution {
public:
    int minOperations(int n) {
    int sum=0;
    for(int i=n;i>n/2;i--){
        sum=sum+ 2*i-1-n;
    }
        return sum;
    }
};