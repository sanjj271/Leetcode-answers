class Solution {
public:
    string parseTernary(string s) {
    stack<char> st;
    string res="";
    char first;
    char second;
    for (int i = s.size() - 1; i >= 0; i--) {
        if(s[i]==':'){
            continue;
        }
        if(s[i]=='?'){
            char first=st.top();
            st.pop();
            char second=st.top();
            st.pop();
            if(s[i-1]=='T'){
                st.push(first);
                i--;
            }
            else if(s[i-1]=='F'){
              st.push(second);
              i--;  
            }
                
        }
        else{
            st.push(s[i]);
        }

        
        
        
    }
    char b = st.top();
    res=res+b;
    return res;
        
        
        
    }
};