class Solution {
public:
    int minimumBuckets(string street) {
    int count = 0;
    for(int i = 1;i<street.size()-1;i++){
         if( (street[i]=='.')&& (street[i+1]=='H') && (street[i-1]=='H')){
            count++;
            street[i-1]='*';
            street[i+1]='*';
        }
    }
    for(int i = 0;i<street.size()-1;i++){
         if((street[i]=='.' )&& (street[i+1]=='H')){
            count++;
            street[i+1]='*';
        }
    }
    for(int i = 1;i<street.size();i++){
         if( street[i]=='.' && street[i-1]=='H'){
            count++;
            street[i-1]='*';
            
        }
    }
    for(int k =0;k<street.size();k++){
           if(street[k]=='H') {
              return -1;
           }
        
    }
    return count;

    }        
    
    
    
 
        
    
        
    
};