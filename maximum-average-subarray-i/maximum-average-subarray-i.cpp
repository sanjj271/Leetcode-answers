class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double sum =0;
    int i=0;
    int j=0;
    double avg=0;
    double maxavg = INT_MIN;
    while(j<nums.size()){
        sum = sum+nums[j];
        if(j-i+1<k){
            j++;
        }
         else if(j-i+1==k){
            avg=double(sum/k);
            maxavg=max(maxavg,avg);
            sum=sum-nums[i];
            i++;
            j++;
            
        }
    }
    return maxavg;

    
        
        
    
        
        
    
        
        
        
    }
};