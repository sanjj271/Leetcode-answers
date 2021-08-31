class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
     int res=0;
     int a=costs.size()/2;
     sort(begin(costs), end(costs),[](const vector<int> &o1, const vector<int> &o2) {
      return (o1[0] - o1[1] < o2[0] - o2[1]);
     });
    for(int i=0;i<costs.size();i++){
        if(i<a){
            res=res+costs[i][0];
        }
        else{
          res=res+costs[i][1];  
        }
    
        
    }
    return res;
    
    
        
    
    
    

        
        
        
        
        
    
    }
};