class Solution {
public:
    string removeStars(string s) {
    stack<char>st;
    string res="";
    stringstream myStream(res);
    string output;
    for(int i =0;i<s.size();i++){
        if(s[i]!='*'){
            st.push(s[i]);
        }
        else if(s[i]=='*'){
            st.pop();
        }
    }
    //return res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
        
    }
};