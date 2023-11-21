class Solution {
public:
    int search(vector<int>& nums, int target) {
    int left =0;
    int right = nums.size()-1;
    while(left<=right){
        int mid = left +(right-left)/2;
        cout<<nums[mid]<<endl;
        cout<<nums[left]<<"----"<<nums[right]<<endl;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[left]<=nums[mid]){
            if(target>=nums[left] && target<nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        else if(nums[right]>=nums[mid]){
            cout<<"here-line22"<<endl;
            if(target>nums[mid] && target<=nums[right]){
                cout<<"here-line24"<<endl;
                left = mid+1;
            }
            else{
                cout<<"here-line28"<<endl;
                right = mid-1;
            }
        }

    }
    return -1;

        
    }
};