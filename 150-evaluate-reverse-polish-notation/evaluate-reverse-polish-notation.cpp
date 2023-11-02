class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    for(int i =0;i<tokens.size();i++){
        if(tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="+" && tokens[i]!="-"){
            int num = stoi(tokens[i]);
            st.push(num);
        }
        else if(tokens[i]=="*"){
            if(!st.empty()){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = a*b;
                st.push(res);
            }
        }
        else if(tokens[i]=="+"){
            if(!st.empty()){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = a+b;
                st.push(res);
            }
        }
        else if(tokens[i]=="-"){
            if(!st.empty()){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = b-a;
                st.push(res);
            }
        }
        else if(tokens[i]=="/"){
            if(!st.empty()){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(a!=0 || b!=0){
                int res = b/a;
                st.push(res);
                }
                else{
                    st.push(0);
                }
            }
        }

    }
    return st.top();

        
    }
};