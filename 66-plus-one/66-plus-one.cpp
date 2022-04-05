class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int carry = 0;
    vector<int>res;
    if(digits.size()==1 && digits[0]==9){
        res.push_back(1);
        res.push_back(0);  
        return res;
    }
    for(int i = digits.size()-1; i>=0;i--){
    if(digits[i]==9 && ((carry ==1 && i!=0)|| i == digits.size()-1)){
        carry =1;
        digits[i] = 0;
    }
    else if( digits[i]!=9 && carry ==1){
        digits[i]= digits[i]+ carry;  
        carry =0;
    }
    else if( digits[i]==9  && carry == 1 && i == 0){
        digits[i]=0;
        auto it = digits.insert(digits.begin(), 1);
    }
    else if( i == digits.size()-1 && digits[i]!= 9){
        digits[i] = digits[i] + 1;
        carry =0;
    }
    }
    return digits;
        
    }
};