typedef pair<vector<int>,int>p1;
struct comp{
 constexpr bool operator() (pair<vector<int>,int>&a , pair<vector<int>,int>&b){
        return a.second>b.second;
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        vector<double>v1;
        pair<int,int>p(0,0);
        priority_queue <p1, vector<p1>, comp > pq;
        for(int i=0;i<points.size();i++){
            pair<int,int>s;
            s.first = points[i][0];
            s.second= points[i][1];
            float g = distance(s,p);
            pair<vector<int>,float>w;
            w.first = points[i];
            w.second=g;
            pq.push(w);
        }
        for(int i =0;i<k;i++){
            p1 a = pq.top();
            ans.push_back(a.first);
            pq.pop();
        }
        return ans;
        
        
        
        
    }
   float distance(pair<int,int>f, pair<int,int>d)
   {
    return (pow(d.first - f.first, 2) + pow(d.second - f.second, 2));
}
    
};