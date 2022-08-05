class word{
    public :
    int freq;
    string lexi;
    word (int f, string l){
        freq = f;
        lexi = l;
        
    }
};
auto it=[]( word a, word b){
    if(a.freq>b.freq){
        return false;
    }
    else if(a.freq<b.freq){
        return true;
    }
    else 
    {
    if (a.lexi<b.lexi){
        return false;
    }
    else
    {
        return true;
    }
    }
}; 
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
    priority_queue<word, vector<word>, decltype(it)> pq(it);
    map<string,int>mp;
    vector<string>ans;
    for(int i=0;i<words.size();i++){
        mp[words[i]]++;
    }
    for (auto x : mp){
        word* wp = new word(x.second, x.first);
        pq.push(*wp);
    }
    for(int i =0;i<k;i++){
        word w= pq.top();
        ans.push_back(w.lexi);
        pq.pop();
    }
    return ans;
    
    
    
    
    }
    
};