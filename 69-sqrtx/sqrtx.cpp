class Solution {
public:
    int mySqrt(int x) {
    int l = 1;
    int h = x;
    long long root;
    if(x == 0){
        return 0;
    }
    while(l<=h){
        long mid = l + (h-l)/2;
        cout<<mid<<endl;
        //long long prod = mid*mid;
        if( mid*mid==x){
            root = mid;
            break;
        }
        else if(mid*mid< x){
            l = mid+1;
            root = mid;
        }
        else if( mid*mid > x){
            h = mid-1;
        }
    }
    return root;
        
        
    }
};