class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
    int r = grid.size();
    int c = grid[0].size()-1;
    int sum =0 ;
    for(int i =0;i<grid.size();i++){
        int ans = PosOfnegativeNumber(grid[i]);
        cout<<ans<<endl;
        if(ans!=-1){
        int k = (c-ans)+1;
        if(k < 0){
            return 0;
        }
        sum = sum+k;
        }
    }
    return sum;

    
        
    }
    int PosOfnegativeNumber(vector<int>res){
    int left =0;
    int right = res.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(mid!=0 && res[mid]< 0 && res[mid-1]>=0){
            return mid;
        }
        else if(res[mid]>=0){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    if(res[0]<0){
        return 0;
    }
    return -1;
    }
};