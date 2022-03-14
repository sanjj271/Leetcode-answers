class Solution {
public:
    string countAndSay(int n) {
    if( n ==1){
        return "1";
    }
    if( n ==2){
        return "11";
    }
    if( n ==3){
        return "21";
    }
    if( n ==4){
        return "1211";
    }
    else{
        int i =0;
        int count = 1;
        string res="";
        string s = countAndSay(n-1);
        while(i < s.size()){
            while( (i< s.size()-1) && s[i] == s[i+1]){
                i++;
                count++;
            }
            res = res + to_string(count) + s[i];
            count = 1;
            if(i!=s.size()-1){
            i++;
            }
            else{
                return res;
            }
            
            
            
            
        }
        return res;
    }
        
        
    
       
    }
};