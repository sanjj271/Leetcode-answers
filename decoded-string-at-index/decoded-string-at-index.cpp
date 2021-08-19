class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long size=0;
        string res="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                size=size*(s[i] -'0');
            }
            else{
                size++;
            }

             
        }
        for(int j=s.size()-1; j>= 0; j-- ){
            k %= size;
            if(k==0 && isalpha(s[j])){
                res=res+s[j];
                return res;
            }
            if(isdigit(s[j])){
                size=size /(s[j]-'0'); 
            }
    
            else{
                size--;
                
                
            }
        }
        return res;
        
        
        
        
        
        
    }
};