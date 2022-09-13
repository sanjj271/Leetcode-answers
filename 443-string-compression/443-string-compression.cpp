class Solution {
public:
    int compress(vector<char>& chars) {
    string s="";
    int count =1;
    if(chars.size()==1){
        s=s+chars[0];
    }
    for(int i =1;i<chars.size();i++){
         if(chars[i-1]==chars[i] && i == chars.size()-1){
            count++;
            s = s+chars[i-1];
            s=s+to_string(count);
         } 
        else if(chars[i-1]==chars[i] ){
            cout<<chars[i]<<endl;
            count++;
        }
        else if( chars[i-1]!=chars[i] && count>1){
            s = s+chars[i-1];
            s=s+to_string(count);
            count =1;
            if(i == chars.size()-1){
                s = s+ chars[i];
            }
            
        }
        else if(chars[i-1]!=chars[i] && count==1){
            s = s+chars[i-1];
            if(i == chars.size()-1){
                s = s+ chars[i];
            }
            count =1;
        }
    }
    chars.clear();
    for(int i =0;i<s.size();i++){
        chars.push_back(s[i]);
        
    }
    return chars.size();
    
        
    
    
        
    }
};