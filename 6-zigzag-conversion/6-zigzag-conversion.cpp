#define UP 1
#define DOWN 2

class Solution {
public:
    string convert(string s, int numRows) {
    vector<vector<char>>vect(numRows);
    int direct = DOWN;
    int a =0;
    string res="";
    if(numRows == 1){
        for(int i =0;i<s.size();i++){
            res = res+s[i];
        }
        return res;
    }
    for(int i =0 ;i < s.length() ;i++){
    if( direct == DOWN && a!= numRows){
        vect[a].push_back(s[i]);
         a++;
        if(a == numRows) {
         direct = UP;
         a--;
        }
    }
    else if(direct == UP && a!= 0){
        a--;
        vect[a].push_back(s[i]);  
        if(a == 0) {
         direct = DOWN;
         a++;
        }
    }
   
    }
    for(int k =0;k<vect.size();k++){
        for(int m =0;m<vect[k].size();m++){
            res = res + vect[k][m];
            
        }
        
    }
    return res;
    
        
    }
};