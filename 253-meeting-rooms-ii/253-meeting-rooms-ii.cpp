typedef pair<int,int>p1;
struct comp{
    constexpr bool operator()(pair<int,int>&a, pair<int,int>&b){
        return a.second > b.second;
    }
};

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
    priority_queue<p1, vector<p1> , comp> pq;
    sort(intervals.begin(), intervals.end());
    int confroom =0;
    p1 a(intervals[0][0],intervals[0][1]);
    pq.push(a);
    confroom++;
    for(int i =1;i<intervals.size();i++){
        p1 b(intervals[i][0],intervals[i][1]);
        p1 c =pq.top();
        if(b.first < c.second){
            confroom++;
            pq.push(b);
        }
        else{
            pq.pop();
            pq.push(b);
        }  
    }
    return confroom;
    
    
        
    }
};