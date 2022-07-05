class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    vector<int>ans2;
    vector<int>ans1;
    int c1=0;
    ans1.push_back(nums[0]);
    for(int i =1;i<nums.size();i++){
        c1 = ans1[i-1]+nums[i];
        ans1.push_back(c1);
    }
    int a = nums[nums.size()-1];
    ans2.push_back(a);
    for(int j =nums.size()-2;j>=0;j--){
        a = a+nums[j];
        ans2.push_back(a);
        
    }
    reverse(ans2.begin(),ans2.end());
    for(int i=0;i<ans1.size();i++){
        if(ans1[i]==ans2[i]){
            return i;
        }
    }

  return -1;
        
  
        
    }
};