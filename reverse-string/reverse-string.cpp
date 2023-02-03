class Solution {
public:
    void reverseString(vector<char>& s) {
     swapping(s,0 , s.size()-1);
    
        
        
        
    }
    void swapping(vector<char>& s , int i , int j){
    int n = s.size();
    if( i == n/2){
        return ;
    }
    swap(s[i] , s[j]);
    swapping( s, i+1 , j-1);
    }
        
        

        

    
};