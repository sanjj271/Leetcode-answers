class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char>st;
    stack<char>ts;
    string ans1="";
    string ans2="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='#'){
            st.push(s[i]);
        }
        else if(s[i]=='#' &&!st.empty()){
            st.pop();
        }
    }
    for(int i=0;i<t.length();i++){
        if(t[i]!='#'){
            ts.push(t[i]);
        }
        else if(t[i]=='#' && !ts.empty()){
            ts.pop();
        }
    }
    if(st.empty() && ts.empty()){
        return true;
    }
    else{
    while(!st.empty()){
        ans1 = ans1 + st.top();
        cout<<ans1;
        st.pop();
    }
    while(!ts.empty()){
        ans2 = ans2 + ts.top();
        //cout<<ans2<<endl;
        ts.pop();
    }
    }
   
    return ans1==ans2;
    
    
    
        
        
    }
};