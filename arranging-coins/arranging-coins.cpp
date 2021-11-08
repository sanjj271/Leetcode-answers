class Solution {
public:
    int arrangeCoins(int n) {
        long left =0;
        long right=n;
        long mid;
        while(left<=right){
            mid=left+ (right-left)/2;
            long g=mid*(mid+1)/2;
            if(g>n){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }
        return right;
        
        
                    
    }
};