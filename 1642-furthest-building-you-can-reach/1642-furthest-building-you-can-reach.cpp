class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    priority_queue<int>maxbricks;
    int diff = 0;
    int i =0;
    for( i=0; i<heights.size()-1; i++){
      diff = heights[i+1]-heights[i];
      if(diff <= 0){
          continue;
      }
      bricks = bricks - diff;
      maxbricks.push(diff);
      if(bricks < 0){
          bricks = bricks + maxbricks.top();
          maxbricks.pop();
          ladders--;
      }
      if(ladders < 0){
          break;
      }      
        
    }
    return i;
        
    }
};