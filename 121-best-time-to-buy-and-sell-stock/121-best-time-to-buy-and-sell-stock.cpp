class Solution {
public:
    int maxProfit(vector<int>& prices) {
    vector<int>min;
    vector<int>max;
    int max_diff=INT_MIN;
    int minimum = prices[0] ;
    int maximum= prices[prices.size()-1] ;
    min.push_back(minimum);
    max.push_back(maximum);
    for(int i =1;i<prices.size();i++){
        if(prices[i]<minimum){
            minimum= prices[i];
        }
        min.push_back(minimum);
    }
    for(int i =prices.size()-2;i>=0;i--){
        if(prices[i]>maximum){
           maximum= prices[i];
        }
        max.push_back(maximum);
    }
    reverse(max.begin(),max.end());
    for(int j =0;j<max.size();j++){
        cout<<max[j]<<endl;
        int a = max[j]-min[j];
        if(a>max_diff){
            max_diff=a;
        }   
    }
    
    return max_diff;
    
        
    
        
    
        
    }
};