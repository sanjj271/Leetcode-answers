class Solution {
public:
    int connectSticks(vector<int>& sticks) {
    int sum=0;
    int totalCost=0;
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<sticks.size();i++){
        pq.push(sticks[i]);
    }
    while(pq.size()!=1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        sum = a + b;
        totalCost=totalCost+sum;
        cout<<totalCost<<endl;
        pq.push(sum);
    }
    return totalCost;
        
    }
};