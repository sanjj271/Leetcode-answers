class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int count=0;
    int j=0;
    if(nums.size()==1){
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count++;
        }
        else{
            nums[j]=nums[i];
            j++;
        }

        }
    for(int m = j ;m < nums.size();m++) {
        nums[m]=0;
            
    }
    
    }
        
    
        
        

        
    
};