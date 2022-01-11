class Solution {
public:
    
    static bool cmp(pair<char, int>& a,pair<char, int>& b)
   {
    return a.second > b.second;
   }
    string reorganizeString(string s) {
        int n = s.length();
        vector<char> v1(n);
        map<char,int>mp;
        int count =0;
        int pos =0;
        map<char, int>::iterator itr;
        int maxvalue = -9999;
        for(int j = 0;j<n;j++){
            mp[s[j]]++;
        }
       vector<pair<char, int> > A;
       for (auto& it : mp) {
        A.push_back(it);
        }
  
        sort(A.begin(), A.end(), cmp);
        for(auto& x : A){
            maxvalue = max(maxvalue , x.second);
        }
        if(maxvalue > n/2 + n%2){
            return "";
        }
        
        cout<<"a"<<endl;
        for (auto& itr : A) {
            count =itr.second;
            cout<<"b"<<endl;
            while(count !=0){
                v1[pos]=itr.first;
                count--;
                
                if(pos == v1.size()-2 || pos > v1.size() || pos == v1.size()-1){
                    pos = 1;
                   cout<<"d"<<endl;   
                }
                else{
                    pos = pos+2;
                }
                cout<<"c"<<endl;
                

            }
            ///if(pos == v1.size()-2 || pos > v1.size()){
                    //pos = 1;
                    
                //}
            
              
        }
        string str(v1.begin(), v1.end());
        return str;
        
        
       
        
        
        
        
        
    }
};