class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a;
    if(nums1.size()==1 && nums1[0]==0){
        nums1=nums2;
    }
    for(int i =0;i<nums1.size();i++){
        if(nums1[i]==0 && i>=m ){
            a = i;
            break;
        }
    }
    for(int i =a,j = 0;i<nums1.size() && j<nums2.size() ;i++,j++){
       // for(int j = 0;j<nums2.size();j++){
            if(nums1[i]==0){
                nums1[i]=nums2[j];
                
            }
        //}
    }
    sort(nums1.begin(),nums1.end());
        
        
    }
};