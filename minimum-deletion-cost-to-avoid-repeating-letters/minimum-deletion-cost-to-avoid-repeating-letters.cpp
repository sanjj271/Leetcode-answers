class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int curr=-1;
		int result=0;
		for(int i=1;i<s.length();i++){
			if(s[i]==s[i-1]) {
				if (curr==-1){
					curr=max(cost[i],cost[i-1]);
					result+=min(cost[i],cost[i-1]);
                }
				else{
					result=result + min(cost[i],curr);
					curr=max(cost[i],curr);
                }
        }
        else{
            curr=-1;
        }
    }
    return result;
			
        
     
        
        
    }
};