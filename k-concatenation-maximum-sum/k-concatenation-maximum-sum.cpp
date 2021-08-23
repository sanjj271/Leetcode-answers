class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) { 
    vector<int>v2;
    long sum=accumulate(arr.begin(), arr.end(), 0);
    if (all_of(arr.cbegin(), arr.cend(), [](int i){ return i>0 ; })) {
        return ((sum*k) % (1000000000+7));
        
    }
    else if (all_of(arr.cbegin(), arr.cend(), [](int i){ return i<0 ; })) {
        return 0;
        
    }
    else{
        if(k==1){
            return KadanesAlgo(arr);
        }
        if(k==2){
        for(int i=0;i<arr.size();i++){
            v2.push_back(arr[i]);
        }
        v2.insert(v2.end(), arr.begin(), arr.end() );
        return KadanesAlgo(v2);    
        }
        else {
        for(int i=0;i<arr.size();i++){
            v2.push_back(arr[i]);
        }
        v2.insert(v2.end(), arr.begin(), arr.end() );
    
        return ((sum>0?KadanesAlgo(v2)+(k-2)*sum:KadanesAlgo(v2))% (1000000000+7));
            
        }
    }
    
        
    
    }
    long KadanesAlgo(vector<int>& arr){
        long max_so_far = INT_MIN;
        long max_ending_here = 0;
        for(int i =0;i<arr.size();i++){
           max_ending_here = max_ending_here +arr[i];
            if( max_ending_here > max_so_far){
                max_so_far=max_ending_here;
            }
            if(max_ending_here <0){
                max_ending_here=0;
            }
        }
        return max_so_far;
    }
};