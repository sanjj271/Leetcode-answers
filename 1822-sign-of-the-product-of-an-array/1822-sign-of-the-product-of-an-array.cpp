class Solution {
public:
    int arraySign(vector<int>& nums) {
    int prod = 1;
    if (std::count(nums.begin(), nums.end(), 0)) {
       return 0;
    }
    for(int i =0;i<nums.size();i++){
        if(nums[i]<0){
             nums[i]=-1; 
        }
        if(nums[i] > 0){
            nums[i]=1;
        }   
    }
    for(int i =0;i<nums.size();i++){
       prod = prod * nums[i];
    }
    return signFunc(prod);
    

    }
    int signFunc(int a) {
        if( a > 0){
            return 1;
        }
        else if( a < 0){
            return -1;
        }
        else{
            return 0;
        }
    }
};