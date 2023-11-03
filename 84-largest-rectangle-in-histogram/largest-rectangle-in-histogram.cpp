class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    vector<int>heights2(heights.size()+2);
    for(int i =1;i<=heights.size();i++){
        heights2[i]=heights[i-1];
    }
    vector<int>ansleft= SmallestToLeft(heights2);
    vector<int>ansRight= SmallestToRight(heights2);
    vector<int>leftans;
    vector<int>rightans;
    vector<int>res;
    for(int i =0;i<heights2.size();i++){
        leftans.push_back(i - ansleft[i]);
        rightans.push_back(ansRight[i]-i);
    }
    for(int i =0;i<leftans.size();i++){
        int x = (leftans[i]+rightans[i]) - 1;
        int y = x*heights2[i];
        res.push_back(y);
    }
    auto maxIt = std::max_element(res.begin(), res.end());
    int maxValue = *maxIt;
    return maxValue;
    }


    vector<int>SmallestToLeft(vector<int>heights2){
    vector<int>res(heights2.size());
    stack<pair<int,int>>st;
    for(int i =0;i<heights2.size();i++){
    while(!st.empty() && st.top().first>=heights2[i]){
        st.pop();
    }
    if(st.empty()){
        res[i]=-1;
        st.push(make_pair(heights2[i],i));
    }
    else if(!st.empty() && st.top().first<heights2[i]){
        res[i]= st.top().second;
        st.push(make_pair(heights2[i],i));
    }

    }
    return res;
    

    }

    //____________________________________________________________

    vector<int>SmallestToRight(vector<int>heights2){
    vector<int>res(heights2.size());
    stack<pair<int,int>>st;
    for(int i =heights2.size()-1;i>=0;i--){
    while(!st.empty() && st.top().first>=heights2[i]){
        st.pop();
    }
    if(st.empty()){
        res[i]=-1;
        st.push(make_pair(heights2[i],i));
    }
    else if(!st.empty() && st.top().first<heights2[i]){
        res[i]= st.top().second;
        st.push(make_pair(heights2[i],i));
    }

    }
    return res;
    

    }
};