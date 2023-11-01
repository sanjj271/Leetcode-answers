class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int>res(nums2.size());
    stack<int>st;
    for(int i = nums2.size() - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= nums2[i]) {
            st.pop(); 
        }
        if(st.empty()) {
            res[i] = -1;  
        } else {
            res[i] = st.top();  
        }
        st.push(nums2[i]);
    }
    map<int,int>mp;
    vector<int>ans;
    for(int i =0;i<nums2.size();i++){
        mp[nums2[i]]=res[i];  
    }
    for(auto m :mp){
        cout<<m.first<<" "<<m.second<<endl;
    }
    for(int i =0;i<nums1.size();i++){
        ans.push_back(mp[nums1[i]]);
    }
    return  ans;
    

    
        
    }
    // int FindFirstOccurence(vector<int>&nums2,int a){
    //     for(int i =0;i<nums2.size();i++){
    //         if(a == nums2[i]){
    //             return i;
    //             break;
    //         }
    //     }
    //     return -1;
    // }
};