class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int sum=0;
        stringstream ss;
        ss << n;
        string str = ss.str();
        for(int i=0;i<str.size();i++){
            sum=sum+((str[i]-'0')*(str[i]-'0'));
            }
        if(s.find(sum) != s.end()){
            return false;
        }
        else{
            s.insert(sum);
        }
        while(true){
        stringstream ss;
        ss << sum;
        string str = ss.str();
        sum=0;
        for(int i=0;i<str.size();i++){
            sum=sum+((str[i]-'0')*(str[i]-'0'));
            
        }
        if(sum==1){
            return true;
        }
        else{
            
            if (s.find(sum) != s.end()){
                return false;
            }
            else{
                s.insert(sum);
            }
            
        }
        
    
        
        
    }
        return false;
    }
};