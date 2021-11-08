class Solution {
public:
    vector<int> constructRectangle(int area) {
    vector<int> ans;
    vector<int>ge;
    int g= sqrt(area);
    for(int i=g;i>=1;i--){
        if(area%i== 0){
        ans.push_back(area/i);
        ans.push_back(i);    
        }
        
    }
    ge.push_back(ans[0]);
    ge.push_back(ans[1]);
    return ge;
    

        
    }
};