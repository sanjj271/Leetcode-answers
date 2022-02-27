class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int right = *max_element(piles.begin(), piles.end());
    int left = 1;
    if(helper(piles,22,h)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"falsee"<<endl;
    }
    while(left < right){
        int mid = left + (right-left)/2;
        if(helper(piles,mid,h)){
            right = mid;
        }
        else{
            left = mid+1;
        }
    }
    return left;
    
    
    
        
    }
    bool helper(vector<int>& piles, int a, int h){
    long div ;
    long sum =0;
    vector<int>v;
    cout<<a<<endl;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%a == 0){
             div = piles[i]/a ;
             }
            else{
                div = piles[i]/a + 1;
            }
            sum = sum + div;
        }
        if( sum <= h){
            return true;
        }
        return false;
    }
    
};