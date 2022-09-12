class Solution {
public:
    int divisorSubstrings(int num, int k) {
    string r =to_string(num);
    int score=0;
    int flag =0;
    for(int i =0;i<r.size();i++){
        string g = r.substr(i, k);
        int a = stoi(g);
        if(g.size()==k && a!=0){
        if(num%a==0 ){
            score++;
        }
        }
    }
        return score;
    


        
    }
};