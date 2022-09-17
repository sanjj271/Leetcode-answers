typedef pair<int, int> p1;
struct comp{
 constexpr bool operator() (pair<int,int>&a , pair<int,int>&b){
        if(a.second == b.second){
            return a.first>b.first;
        }
        else{
            return a.second > b.second;
        }
    }
};
class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<int>ans;
    priority_queue<p1 , vector<p1>, comp> pq;
    int r = mat.size();
    int c= mat[0].size();
    for(int i=0;i<r;i++){
        int sum = countSoldiers(mat[i]);
        pair<int,int>p2(i,sum);
        pq.push(p2);
    }
    for(int i=0;i<k;i++){
        p1 a = pq.top();
        ans.push_back(a.first);
        pq.pop();
        
    }
    return ans;
    
    
    
    
        
    }
    int countSoldiers ( vector<int>r ){
        int count=0;
        for(int i=0;i<r.size();i++){
            if(r[i]==1){
                count++;
            }
        }
        return count;
    }
};
