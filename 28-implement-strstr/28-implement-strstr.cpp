class Solution {
public:
    int strStr(string haystack, string needle) {
    if(needle == ""){
        return 0;
    }
    if(haystack==""){
        return -1;
    }
    if(haystack == needle){
        return 0;
    }
    if(needle.size()>haystack.size()){
        return -1;
    }
    int k = needle.size();
    for(int i =0;i<=haystack.size()-k;i++){
    string comp = haystack.substr(i,k);
    if(comp == needle){
        return i;   
    }
    }
    return -1;
        
   
   
    
        
    }
};