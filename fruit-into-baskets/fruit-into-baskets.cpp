class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    map<int,int>mp;
    int left=0;
    int right=0;
    int ans=0;
    for(int i=0;i<fruits.size();i++){
        mp[fruits[i]]++;
        right++;
    while(mp.size()>2){
        mp[fruits[left]]--;
        if(mp[fruits[left]]==0){
            mp.erase(fruits[left]);   
        }
        left++;
        
    }
    ans=max(ans,right-left);
    }
    map<int, int>::iterator it1;
    for (it1 = mp.begin(); it1!=mp.end(); ++it1)
        cout << it1->first << "->" << it1->second << endl;
      
    return ans;
    
    
        
        
    }
    
};