class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
    vector<int>parent(n);
    unordered_set<int> ss;
    for(int i=0;i<parent.size();i++){
        parent[i]=i;
    }
    for(int i = 0;i< edges.size();i++){
        combine(parent,edges[i][0],edges[i][1]);
    }
    for(int i=0;i<parent.size();i++){
        cout<<parent[i]<<endl;
    }

    for(int j=0;j<parent.size();j++){
        ss.insert (find(parent,parent[j]));
    }
    
 
    
    return ss.size();
       
        
    }
    int find(vector<int>&parent,int vertex){
        if(vertex == parent[vertex]){
            return vertex;
        }
        return  parent[vertex] = find(parent,parent[vertex]);
    }
    int combine(vector<int>&parent,int vertex1,int vertex2){
    int p1= find(parent,vertex1);
    int p2= find(parent,vertex2);
    if(p1 == p2){
        return 0;   
    }
        
    if(p1 < p2){
        parent[p2]=p1;
    }
    else{
        parent[p1]=p2;
    }
    return 1;
    }
    
    
    

};