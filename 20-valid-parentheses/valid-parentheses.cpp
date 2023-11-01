class Solution {
public:
    bool isValid(string s) {
    stack<char>st;
    if(s.size()==1){
        return false;
    }
    for(int i =0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        } 
        else if(st.empty() && (s[i]==')' || s[i]==']' || s[i]=='}')){
            return false;
        }
        else if( !st.empty() && (s[i]==')' && st.top()!='(' || s[i]==']' && st.top()!='[' || s[i]=='}' && st.top()!='{')){
            return false;
        }
        else if(!st.empty()){
            st.pop();
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
    


    

        
    }
};