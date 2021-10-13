class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
     unordered_set<string> uniqueEmails;
     for(string email : emails){
         string news="";
         for( char c : email){
             if(c=='+' || c=='@'){
                 break;
             }
             if( c== '.'){
                 continue;
             }
             news=news+c;
         }
         
    
     string domain;
     for(int i=email.size()-1; i >=0 ; i-- ){
         char currchar=email[i];
         domain=domain+currchar;
         if(currchar=='@'){
             break;
         }
         reverse(domain.begin(), domain.end());
         news=news+domain;
     }
         uniqueEmails.insert(news);
         
     }
    return uniqueEmails.size();
    
    

    
    
    
        
    }
};