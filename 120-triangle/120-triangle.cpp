class Solution {
public:
    map<string,int>mp;
    int minimumTotal(vector<vector<int>>& triangle) {
     return solve(0,0,triangle);
        
        
        
    }
    int solve(int i, int j, vector<vector<int>>& triangle){
       if(i == triangle.size()-1){
           return triangle[i][j];
       }
       if(mp.find(to_string(i)+"-"+to_string(j))==mp.end()){
       int a = triangle[i][j] + solve(i+1,j,triangle);
       int b = triangle[i][j] + solve(i+1,j+1, triangle);
        mp[to_string(i)+"-"+to_string(j)]=min(a,b);
       }
      return mp[to_string(i)+"-"+to_string(j)];
    }
    
};

