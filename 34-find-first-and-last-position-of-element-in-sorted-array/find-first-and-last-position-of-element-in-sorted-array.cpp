class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans;
    int a = startPos(nums, target);
    int b = endPos(nums, target);
    ans.push_back(a);
    ans.push_back(b);
    return ans;
        
    }
    int startPos(vector<int>& nums, int target){
    int l =0;
    int h = nums.size()-1;
    int startPos = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        cout<<mid<<endl;
        if(nums[mid]==target){
            cout<<"NKFN";
            if(mid==0){
                startPos = mid;
                cout<<startPos;
                break;
            }
            // if((mid == 0 && nums.size()==1) || (mid == 0 && nums[mid+1]==target)){
            //     startPos = mid;
            //     break; 
            // }
            else if(nums[mid-1]!=target){
                startPos =  mid;
                break;
            }
            else{
                h = mid-1;
            }
        }
        else if(nums[mid]>target){
            h = mid-1;
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
    }
    return startPos;
    }

    int endPos(vector<int>& nums, int target){
    int l =0;
    int h = nums.size()-1;
    int endPos = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(nums[mid]==target){
            cout<<"hereeee"<<endl;
            if(mid == nums.size()-1){
                 endPos = mid;
                 break; 
            }
            else if(nums[mid+1]!=target){
                endPos =  mid;
                break;
            }
            else{
                l = mid+1;
            }
        }
        else if(nums[mid]>target){
            h = mid-1;
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
    }
    return endPos;
    }

};