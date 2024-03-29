class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
    int s = q1.size();
    while(s>1){
        q2.push(q1.front());
        q1.pop();
        s--;
    }
    int top = q1.front();
    q1.pop();
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    return top;

        
    }
    
    int top() {
    int s = q1.size();
    while(s>1){
        q2.push(q1.front());
        q1.pop();
        s--;
    }
    int top = q1.front();
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    return top;

        
    }
    
    bool empty() {
     if(q1.empty()){
         return true;
     }
     return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */