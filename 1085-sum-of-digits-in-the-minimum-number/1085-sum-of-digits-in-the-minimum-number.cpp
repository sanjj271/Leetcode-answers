class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
    int min_num=INT_MAX;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<min_num){
            min_num=nums[i];
        }
    }
    if (sum(min_num)%2!=0){
        return 0;
    }
    return 1;
    
        
    }
    int sum(int a){
        int summ=0;
        int m;
        while(a>0){
         m = a%10;
         summ = summ + m;
         a =a/10;
        }
        return summ;
    }
};