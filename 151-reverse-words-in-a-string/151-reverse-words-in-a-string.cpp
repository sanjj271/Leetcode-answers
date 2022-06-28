class Solution {
public:
    string reverseWords(string s) {
        string word, res = "";
        stack<string> st;
        stringstream strm(s);
        
        while(strm >> word){
            st.push(word);
        }
        
        while(!st.empty()){
            res += st.top();
            st.pop();
            if(!st.empty()) res += " ";
        }
        
        return res;
    }
};