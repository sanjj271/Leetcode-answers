class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int l = 0;
    int r = arr.size()-1;
    while(l<=r){
        int mid=l + (r-l)/2;
        cout<<mid<<endl;
        if(mid!=0 && mid!=arr.size()-1){
            if(arr[mid-1] < arr[mid] && arr[mid+1] <arr[mid]){
                return mid;
            }  
            else if(arr[mid-1]>=arr[mid]){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        else if(mid==0){
            if(arr[mid+1]>arr[mid]){
                return mid;
            }
            else{
                l = mid+1;
            }
        }
        else if(mid == arr.size()-1){
            if(arr[mid-1] < arr[mid]){
                return mid;
            }
            else{
                r = mid-1;
            }
        }
        
    }
    return -1;

        
     
        
    }
};