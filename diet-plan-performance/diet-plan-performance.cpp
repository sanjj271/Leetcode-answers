class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
    int sum=0;
    int count=0;
    int i=0;
    int j=0;
    while(j<calories.size()){
        sum=sum+calories[j];
        cout<<sum<<endl;
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
          if(sum > upper){
              count++;
          }
          if(sum < lower){
              count--;
          }
          sum=sum-calories[i];
          i++;
          j++;
         
            
        }
    }
    return count;
        
        
        
        }
};