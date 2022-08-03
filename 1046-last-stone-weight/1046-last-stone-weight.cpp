class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int>q1;
    for(int i=0;i<stones.size();i++){
        q1.push(stones[i]);
    }
    while(q1.size()>1){
        int y = q1.top();
        q1.pop();
        int x = q1.top();
        q1.pop();
        if(x != y ){
            q1.push(y-x);   
        }
    }
    if(!q1.empty()){
        return q1.top();
    }
    return 0;
    
        
    }
};