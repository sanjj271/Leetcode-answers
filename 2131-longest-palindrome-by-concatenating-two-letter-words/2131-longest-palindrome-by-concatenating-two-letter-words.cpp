class Solution {
public:
    int longestPalindrome(vector<string>& words) {
    int final_length=0;
    int sim_count =0;
    map<string,int>mp;
    map<string,int>m1;
    string a;
    string max_word="";
    int count =0;
    int max_count = INT_MIN;
    for(int i=0;i<words.size();i++){
        a = words[i];
        reverse(a.begin(),a.end());
        if(a==words[i]){
            m1[words[i]]++;
            if(m1[words[i]] > max_count){
                max_count = m1[words[i]];
                max_word = words[i];
            }
            sim_count++;
            continue;  
        }
        else if(mp.find(a)==mp.end()){
            mp[words[i]]++;
        }
        else{
            mp[a]--;
            if(mp[a]==0){
                mp.erase(a);
            }
            final_length = final_length + 4;
        }
        
        
    }
    for(auto k : m1){
        
        cout<<k.first<<" "<<k.second<<endl;
    }
    for(auto l : mp){
        cout<<l.first<<" "<<l.second<<endl;
    }
    cout<<final_length<<endl;
    int flag =0;
    if(sim_count >=1){
        final_length =  final_length + (max_count*2);
        m1.erase(max_word);
        if(max_count%2!=0){
            flag = 1;
        }
        for(auto j : m1){
            if(flag == 0){
                if(j.second%2!=0){
                    final_length =  final_length + j.second * 2;
                    flag = 1;
                }
                else{
                    final_length =  final_length + j.second * 2;
                }
            }
            else if(flag == 1){
            if(j.second %2==0 ){
             final_length =  final_length + (j.second*2); 
            }
          else{
             final_length =  final_length + ((j.second-1) * 2); 
          }
            }
          
      }
      
    }
    return final_length;
        
    }
};