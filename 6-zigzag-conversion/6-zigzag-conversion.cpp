#define up 0
#define down 1
class Solution {
public:
    string convert(string s, int numRows) {
    int direct = down;
    int a = 0;
    string res = "";
    vector<vector<char>>vect(numRows);
    if(numRows == 1){
        return s;
    }
    for(int i=0;i<s.size();i++){
        if(direct == down && a!= numRows){
        vect[a].push_back(s[i]);
        a++;
        if(a == numRows){
            direct = up;
            a--;
        }
        }
        else if(direct == up && a!= 0){
            a--;
            vect[a].push_back(s[i]);
            if(a == 0){
                direct = down;
                a++;
            }
        }
    }
    for(int m = 0; m < vect.size();m++){
        for(int n =0;n<vect[m].size();n++){
            res = res + vect[m][n];
        }
    }
    return res;
        
        
    }
};