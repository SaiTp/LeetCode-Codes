class MyStack {
public:
    queue<int>q1,q2;
    int t;
    MyStack() {
        t=-1;
    }
    
   void push(int x)
    {
        q1.push(x);
        
        while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();}
        
        swap(q1, q2);
    }
    
    int pop()
    {
        int x = q2.front();
        q2.pop();
        return x;
    }
    
    int top()
    {
        return q2.front();
    }
    
    bool empty()
    {
        if(q2.size() == 0)
            return true;
        else
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